// PX2EditTimeLineEdit.cpp

#include "PX2EditTimeLineEdit.hpp"
#include "PX2InterpCurve.hpp"
#include "PX2VertexColor4Material.hpp"
#include "PX2VertexBufferAccessor.hpp"
#include "PX2Renderer.hpp"
#include "PX2EffectModel.hpp"
#include "PX2InterpCurveController.hpp"
#include "PX2UIView.hpp"
#include "PX2EditEventType.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
TimeLineEdit::TimeLineEdit() :
mNumSamples(512),
mMaxRange(99999.0f)
{
	mVFormat = PX2_GR.GetVertexFormat(GraphicsRoot::VFT_PC);

	mCurveEditNode_UIGroup = new0 UIFrame();

	mCurveEditNode_GridRoot = new0 Node();

	mCurveEditNode_Grid = new0 Node();
	mCurveEditNode_GridRoot->AttachChild(mCurveEditNode_Grid);

	mGridNode = new0 Node();
	mCurveEditNode_GridRoot->AttachChild(mGridNode);
	VertexFormat *vf = PX2_GR.GetVertexFormat(GraphicsRoot::VFT_PC);
	VertexBuffer *vBuffer = new0 VertexBuffer(4096, vf->GetStride(), Buffer::BU_DYNAMIC);
	mGridPoly = new0 Polysegment(vf, vBuffer, false);
	mGridNode->AttachChild(mGridPoly);
	VertexColor4Material *mtl = new0 VertexColor4Material();
	mGridPoly->SetMaterialInstance(mtl->CreateInstance());
}
//----------------------------------------------------------------------------
TimeLineEdit::~TimeLineEdit()
{
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetTimeLineRenderStep_UIGroup(RenderStep *renderStep)
{
	mTimeLineRenderStep_UIGroup = renderStep;

	if (mTimeLineRenderStep_UIGroup)
		mTimeLineRenderStep_UIGroup->SetNode(mCurveEditNode_UIGroup);
}
//----------------------------------------------------------------------------
RenderStep *TimeLineEdit::GetTimeLineRenderStep_UIGroup() const
{
	return mTimeLineRenderStep_UIGroup;
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetTimeLineRenderStep_Grid(RenderStep *renderStep)
{
	mTimeLineRenderStep_Grid = renderStep;

	if (mTimeLineRenderStep_Grid)
		mTimeLineRenderStep_Grid->SetNode(mCurveEditNode_GridRoot);
}
//----------------------------------------------------------------------------
RenderStep *TimeLineEdit::GetTimeLineRenderStep_Grid() const
{
	return mTimeLineRenderStep_Grid;
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetCtrlsScale(const Float2 &scale)
{
	mCtrlsScale = scale;

	for (int i = 0; i < (int)mCurves.size(); i++)
	{
		if (mCurves[i])
		{
			mCurves[i]->SetCtrlsScale(scale[0], scale[1]);
		}
	}
}
//----------------------------------------------------------------------------
const Float2 &TimeLineEdit::GetCtrlsScale() const
{
	return mCtrlsScale;
}
//----------------------------------------------------------------------------
void TimeLineEdit::GetInRange(float &inMin, float &inMax)
{
	int numVisCurves = 0;

	for (int i = 0; i < (int)mCurves.size(); i++)
	{
		if (mCurves[i] && mCurves[i]->IsVisible())
		{
			numVisCurves++;
			mCurves[i]->GetInRange(inMin, inMax);
		}
	}

	if (0 == numVisCurves)
	{
		inMin = 0.0f;
		inMax = 0.0f;
	}
}
//----------------------------------------------------------------------------
void TimeLineEdit::GetOutRange(float &outMin, float &outMax)
{
	int numVisCurves = 0;

	for (int i = 0; i < (int)mCurves.size(); i++)
	{
		if (mCurves[i] && mCurves[i]->IsVisible())
		{
			numVisCurves++;
			mCurves[i]->GetOutRange(outMin, outMax);
		}
	}

	if (0 == numVisCurves)
	{
		outMin = 0.0f;
		outMax = 0.0f;
	}
}
//----------------------------------------------------------------------------
void TimeLineEdit::CreateAddCurveGroup(PX2::Object *obj)
{
	EffectModule *module = DynamicCast<EffectModule>(obj);
	Controller *ctrl = DynamicCast<Controller>(obj);

	if (module)
	{
		_CreateAddCurveGroup(module);
	}
	else if (ctrl)
	{
		_CreateAddCurveGroup(ctrl);
	}
}
//----------------------------------------------------------------------------
bool TimeLineEdit::HasCurveGroup(PX2::Object *obj)
{
	for (int i = 0; i < (int)mCurveGroups.size(); i++)
	{
		if (obj == mCurveGroups[i]->mObject)
		{
			return true;
		}
	}

	return false;
}
//----------------------------------------------------------------------------
void TimeLineEdit::ReCreateAddCurveGroup(PX2::Object *obj)
{
	if (!HasCurveGroup(obj))
		return;

	RemoveGroup(obj);

	CreateAddCurveGroup(obj);
}
//----------------------------------------------------------------------------
void TimeLineEdit::RemoveGroup(PX2::Object *obj)
{
	SetSelectedCurveCtrl(0);

	std::vector<CurveGroupPtr>::iterator it = mCurveGroups.begin();
	for (; it != mCurveGroups.end(); it++)
	{
		if ((*it)->mObject == obj)
		{
			CurveGroup *group = *it;

			RemoveCurve(group->mCurve0);
			RemoveCurve(group->mCurve1);
			RemoveCurve(group->mCurve2);
			RemoveCurve(group->mCurve3);
			RemoveCurve(group->mCurve4);
			RemoveCurve(group->mCurve5);

			UICurveGroup *uiGroup = _GetUICurveGroupFormUIView(mCurveEditNode_UIGroup, group);
			if (uiGroup)
			{
				mCurveEditNode_UIGroup->DetachChild(uiGroup);
			}

			*it = 0;
			mCurveGroups.erase(it);
			break;
		}
	}

	// adjust all ui position
	for (int i = 0; i < (int)mCurveGroups.size(); i++)
	{
		CurveGroup *group = mCurveGroups[i];

		UICurveGroup *uiGroup = _GetUICurveGroupFormUIView(mCurveEditNode_UIGroup, group);
		if (uiGroup)
		{
			float uiHeight = uiGroup->GetSize().Height;
			float posZ = i*uiHeight;
			uiGroup->LocalTransform.SetTranslate(APoint(0.0f, 0.0f, posZ));
		}
	}
}
//----------------------------------------------------------------------------
void TimeLineEdit::ClearGroup(UICurveGroup *uiGroup)
{
	SetSelectedCurveCtrl(0);

	RemoveGroup(uiGroup->GetCurveGroup()->mObject);
}
//----------------------------------------------------------------------------
void TimeLineEdit::ClearAllGroups()
{
	SetSelectedCurveCtrl(0);

	for (int i = 0; i < (int)mCurveGroups.size(); i++)
	{
		CurveGroup *group = mCurveGroups[i];

		RemoveCurve(group->mCurve0);
		RemoveCurve(group->mCurve1);
		RemoveCurve(group->mCurve2);
		RemoveCurve(group->mCurve3);
		RemoveCurve(group->mCurve4);
		RemoveCurve(group->mCurve5);
	}

	mCurveGroups.clear();
	mCurveEditNode_UIGroup->DetachAllChildren();
}
//----------------------------------------------------------------------------
CurveGroup *TimeLineEdit::GetCurveGroup(Curve *curve)
{
	for (int i = 0; i < (int)mCurveGroups.size(); i++)
	{
		if (curve == mCurveGroups[i]->mCurve0
			|| curve == mCurveGroups[i]->mCurve0
			|| curve == mCurveGroups[i]->mCurve1
			|| curve == mCurveGroups[i]->mCurve2
			|| curve == mCurveGroups[i]->mCurve3
			|| curve == mCurveGroups[i]->mCurve4
			|| curve == mCurveGroups[i]->mCurve5)
		{
			return mCurveGroups[i];
		}
	}

	return 0;
}
//----------------------------------------------------------------------------
CurveGroup *TimeLineEdit::GetCurveGroup(PX2::Object *obj)
{
	for (int i = 0; i < (int)mCurveGroups.size(); i++)
	{
		if (obj == mCurveGroups[i]->mObject)
		{
			return mCurveGroups[i];
		}
	}

	return 0;
}
//----------------------------------------------------------------------------
void TimeLineEdit::UpdateCurve(PX2::Object *obj, bool addRemovePoint)
{
	CurveGroup *group = GetCurveGroup(obj);
	if (group)
	{
		if (group->mCurve0)
		{
			group->mCurve0->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve0->ReCreateCtrls();
			}
			else
			{
				group->mCurve0->UpdateCtrls();
			}
		}

		if (group->mCurve1)
		{
			group->mCurve1->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve1->ReCreateCtrls();
			}
			else
			{
				group->mCurve1->UpdateCtrls();
			}
		}

		if (group->mCurve2)
		{
			group->mCurve2->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve2->ReCreateCtrls();
			}
			else
			{
				group->mCurve2->UpdateCtrls();
			}
		}

		if (group->mCurve3)
		{
			group->mCurve3->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve3->ReCreateCtrls();
			}
			else
			{
				group->mCurve3->UpdateCtrls();
			}
		}

		if (group->mCurve4)
		{
			group->mCurve4->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve4->ReCreateCtrls();
			}
			else
			{
				group->mCurve4->UpdateCtrls();
			}
		}

		if (group->mCurve5)
		{
			group->mCurve5->UpdateCurve();
			if (addRemovePoint)
			{
				group->mCurve5->ReCreateCtrls();
			}
			else
			{
				group->mCurve5->UpdateCtrls();
			}
		}
	}
}
//----------------------------------------------------------------------------
bool TimeLineEdit::HasCurve(Curve *curve)
{
	for (int i = 0; i < (int)mCurves.size(); i++)
	{
		if (curve == mCurves[i])
			return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void TimeLineEdit::AddCurve(Curve *curve)
{
	if (!curve)
		return;

	if (!HasCurve(curve))
	{
		mCurves.push_back(curve);

		mCurveEditNode_Grid->AttachChild(curve->GetNode());
	}
}
//----------------------------------------------------------------------------
void TimeLineEdit::RemoveCurve(Curve *curve)
{
	if (!curve) return;

	std::vector<CurvePtr>::iterator it = mCurves.begin();
	for (; it != mCurves.end(); it++)
	{
		if (curve == *it)
		{
			mCurveEditNode_Grid->DetachChild(curve->GetNode());

			mCurves.erase(it);
			return;
		}
	}
}
//----------------------------------------------------------------------------
int TimeLineEdit::GetNumCurves() const
{
	return (int)mCurves.size();
}
//----------------------------------------------------------------------------
Curve *TimeLineEdit::GetCurve(int i)
{
	if (0 <= i && i < (int)mCurves.size())
		return mCurves[i];

	return 0;
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetActiveCurve(Curve *curve)
{
	if (mActiveCurve == curve)
		return;

	mActiveCurve = curve;
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetSelectedCurveCtrl(CurveCtrl *ctrl)
{
	if (mSelectedCurveCtrl == ctrl)
		return;

	if (mSelectedCurveCtrl)
	{
		mSelectedCurveCtrl->Select(false);
	}

	mSelectedCurveCtrl = ctrl;

	if (mSelectedCurveCtrl)
	{
		mSelectedCurveCtrl->Select(true);
	}
}
//----------------------------------------------------------------------------
void TimeLineEdit::SetSelectedUICurveGroup(PX2::UICurveGroup *group)
{
	if (mSelectedCruveGroup)
	{
		mSelectedCruveGroup->SetBackColor(Float3(0.659f, 0.659f, 0.659f));
	}

	mSelectedCruveGroup = group;

	if (mSelectedCruveGroup)
	{
		mSelectedCruveGroup->SetBackColor(Float3(0.5f, 0.0f, 0.25f));
	}
}
//----------------------------------------------------------------------------
CurveCtrl * TimeLineEdit::TrySelectCurve(PX2::Movable *mov)
{
	for (int i = 0; i < (int)mCurves.size(); i++)
	{
		if (mCurves[i])
		{
			CurveCtrl * ctrl = mCurves[i]->TrySelectCurve(mov);
			if (ctrl)
			{
				return ctrl;
			}
		}
	}

	return 0;
}
//----------------------------------------------------------------------------
void TimeLineEdit::_CreateAddCurveGroup(PX2::EffectModule *module)
{
	if (HasCurveGroup(module))
		return;

	EffectModule::ModuleType moduleType = module->GetModuleType();
	bool isRange = module->IsRange();
	CurveGroup *group = 0;
	if (EffectModule::MT_FLOAT == moduleType && !isRange)
	{
		CurvePtr curve = new0 CurveFloat(&(module->GetCurveFloatMin()),
			Float3::RED);
		AddCurve(curve);
		group = new0 CurveGroup(CurveGroup::CGT_FLOAT);
		group->mCurve0 = curve;
		group->mObject = module;
		group->SetName(module->GetName());
		_AddGroup(group);
	}
	else if (EffectModule::MT_FLOAT == moduleType && isRange)
	{
		CurvePtr curve0 = new0 CurveFloat(&(module->GetCurveFloatMin()),
			Float3::RED);
		CurvePtr curve1 = new0 CurveFloat(&(module->GetCurveFloatMax()),
			Float3::GREEN);
		AddCurve(curve0);
		AddCurve(curve1);
		group = new0 CurveGroup(CurveGroup::CGT_FLOATRANGE);
		group->mCurve0 = curve0;
		group->mCurve1 = curve1;
		group->mObject = module;
		group->SetName(module->GetName());
		_AddGroup(group);
	}
	else if ((EffectModule::MT_FLOAT3 == moduleType ||
		EffectModule::MT_FLOAT3COLOR == moduleType) && !isRange)
	{
		CurvePtr curve0 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 0, Float3::RED);
		CurvePtr curve1 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 1, Float3::GREEN);
		CurvePtr curve2 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 2, Float3::BLUE);
		AddCurve(curve0);
		AddCurve(curve1);
		AddCurve(curve2);
		group = new0 CurveGroup(CurveGroup::CGT_FLOAT3);
		group->mCurve0 = curve0;
		group->mCurve1 = curve1;
		group->mCurve2 = curve2;
		group->mObject = module;
		group->SetName(module->GetName());
		_AddGroup(group);
	}
	else if ((EffectModule::MT_FLOAT3 == moduleType || EffectModule::MT_FLOAT3COLOR == moduleType) && isRange)
	{
		CurvePtr curve0 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Max()), 0, Float3::RED);
		CurvePtr curve1 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Max()), 1, Float3::GREEN);
		CurvePtr curve2 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Max()), 2, Float3::BLUE);
		float low = 0.4f;
		CurvePtr curve3 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 0, Float3(low, 0.0f, 0.0f));
		CurvePtr curve4 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 1, Float3(0.0f, low, 0.0f));
		CurvePtr curve5 = new0 CurveFloat3Axis(
			&(module->GetCurveFloat3Min()), 2, Float3(0.0f, 0.0f, low));
		AddCurve(curve0);
		AddCurve(curve1);
		AddCurve(curve2);
		AddCurve(curve3);
		AddCurve(curve4);
		AddCurve(curve5);
		group = new0 CurveGroup(CurveGroup::CGT_FLOAT3RANGE);
		group->mCurve0 = curve0;
		group->mCurve1 = curve1;
		group->mCurve2 = curve2;
		group->mCurve3 = curve3;
		group->mCurve4 = curve4;
		group->mCurve5 = curve5;
		group->mObject = module;
		group->SetName(module->GetName());
		_AddGroup(group);
	}

	if (!group)
		return;

	UICurveGroupPtr uiGroup = new0 UICurveGroup(group);

	mCurveEditNode_UIGroup->AttachChild(uiGroup);

	float uiHeight = uiGroup->GetSize().Height;
	int numGroups = _GetNumGroups();
	float posZ = (numGroups - 1)*uiHeight;
	uiGroup->LocalTransform.SetTranslate(APoint(0.0f, 0.0f, posZ));
}
//----------------------------------------------------------------------------
void TimeLineEdit::_CreateAddCurveGroup(PX2::Controller *ctrl)
{
	if (HasCurveGroup(ctrl))
		return;

	CurveGroup *group = 0;

	InterpCurveFloat3Controller *float3Ctrl = DynamicCast<InterpCurveFloat3Controller>(ctrl);
	InterpCurveFloatController *floatCtrl = DynamicCast<InterpCurveFloatController>(ctrl);

	if (float3Ctrl)
	{
		CurvePtr curve0 = new0 CurveFloat3Axis(&(float3Ctrl->mValues), 0, Float3::RED);
		CurvePtr curve1 = new0 CurveFloat3Axis(&(float3Ctrl->mValues), 1, Float3::GREEN);
		CurvePtr curve2 = new0 CurveFloat3Axis(&(float3Ctrl->mValues), 2, Float3::BLUE);
		AddCurve(curve0);
		AddCurve(curve1);
		AddCurve(curve2);
		group = new0 CurveGroup(CurveGroup::CGT_FLOAT3);
		group->mCurve0 = curve0;
		group->mCurve1 = curve1;
		group->mCurve2 = curve2;
		group->mObject = ctrl;
		group->SetName(ctrl->GetName());
		_AddGroup(group);
	}
	else if (floatCtrl)
	{
		CurvePtr curve = new0 CurveFloat(&(floatCtrl->mValues), Float3::RED);
		AddCurve(curve);
		group = new0 CurveGroup(CurveGroup::CGT_FLOAT);
		group->mCurve0 = curve;
		group->mObject = ctrl;
		group->SetName(ctrl->GetName());
		_AddGroup(group);
	}

	if (!group)
		return;

	UICurveGroupPtr uiGroup = new0 UICurveGroup(group);

	mCurveEditNode_UIGroup->AttachChild(uiGroup);

	float uiHeight = uiGroup->GetSize().Height;
	int numGroups = _GetNumGroups();
	float posZ = (numGroups - 1)*uiHeight;
	uiGroup->LocalTransform.SetTranslate(APoint(0.0f, 0.0f, posZ));
}
//----------------------------------------------------------------------------
void TimeLineEdit::_AddGroup(CurveGroup *group)
{
	if (!group)
		return;

	mCurveGroups.push_back(group);
}
//----------------------------------------------------------------------------
int TimeLineEdit::_GetNumGroups() const
{
	return (int)mCurveGroups.size();
}
//----------------------------------------------------------------------------
PX2::UICurveGroup *TimeLineEdit::_GetUICurveGroupFormUIView(PX2::Node *frame, 
	CurveGroup *group)
{
	if (!frame) return 0;

	for (int i = 0; frame->GetNumChildren(); i++)
	{
		UICurveGroup *uiGroup = DynamicCast<UICurveGroup>(frame->GetChild(i));
		if (uiGroup)
		{
			if (uiGroup->GetCurveGroup() == group)
			{
				return uiGroup;
			}
		}
	}

	return 0;
}
//----------------------------------------------------------------------------
PX2::Polysegment *TimeLineEdit::CreatePoly(PX2::InterpCurveFloat *curve, Float3 color)
{
	if (!curve)
		return 0;

	VertexBufferPtr vbuffer = new0 VertexBuffer(mNumSamples,
		mVFormat->GetStride(), Buffer::BU_DYNAMIC);
	Polysegment *p = new0 Polysegment(mVFormat, vbuffer, true);

	UpdatePoly(curve, p, color);

	p->SetMaterialInstance(VertexColor4Material::CreateUniqueInstance());
	return p;
}
//----------------------------------------------------------------------------
void TimeLineEdit::UpdatePoly(PX2::InterpCurveFloat *curve, PX2::Polysegment *p,
	Float3 color)
{
	int keyNum = curve->GetNumPoints();
	if (0 == keyNum)
		return;

	float outValMin = curve->Eval(-mMaxRange, 0.0f);
	float outValMax = curve->Eval(mMaxRange, 0.0f);

	VertexFormat *vFormat = p->GetVertexFormat();
	VertexBuffer *vBuffer = p->GetVertexBuffer();
	VertexBufferAccessor vba(vFormat, vBuffer);

	int numPoints = 0;
	vba.Position<Float3>(numPoints) = Float3(-mMaxRange, 0.0f, outValMin);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	for (int i = 0; i < keyNum - 1; i++)
	{
		const InterpCurvePoint<float> &point = curve->Points[i];
		const InterpCurvePoint<float> &pointP1 = curve->Points[i + 1];

		if (ICM_CONSTANT == point.InterpMode)
		{
			vba.Position<Float3>(numPoints) = Float3(point.InVal, 0.0f, point.OutVal);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
			vba.Position<Float3>(numPoints) = Float3(pointP1.InVal, 0.0f, point.OutVal);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
		}
		else if (ICM_LINEAR == point.InterpMode)
		{
			vba.Position<Float3>(numPoints) = Float3(point.InVal, 0.0f, point.OutVal);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
			vba.Position<Float3>(numPoints) = Float3(pointP1.InVal, 0.0f, pointP1.OutVal);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
		}
		else
		{
			for (int k = 0; k < 21; k++)
			{
				float inVal = Lerp<float, float>(point.InVal, pointP1.InVal, (float)k / 20.0f);
				float outVal = curve->Eval(inVal, 0.0f);

				vba.Position<Float3>(numPoints) = Float3(inVal, 0.0f, outVal);
				vba.Color<Float3>(0, numPoints) = color;
				numPoints++;
			}
		}
	}

	const InterpCurvePoint<float> &lastPoint = curve->Points[keyNum - 1];
	vba.Position<Float3>(numPoints) = Float3(lastPoint.InVal, 0.0f, lastPoint.OutVal);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	vba.Position<Float3>(numPoints) = Float3(mMaxRange, 0.0f, outValMax);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	p->SetNumSegments(numPoints - 1);
	p->UpdateModelSpace(Renderable::GU_MODEL_BOUND_ONLY);

	Renderer::UpdateAll(vBuffer);
}
//----------------------------------------------------------------------------
PX2::Polysegment *TimeLineEdit::CreatePoly(PX2::InterpCurveFloat3 *curve,
	int axis, Float3 color)
{
	if (!curve)
		return 0;

	// p0
	VertexBufferPtr vbuffer = new0 VertexBuffer(mNumSamples,
		mVFormat->GetStride(), Buffer::BU_DYNAMIC);
	Polysegment *poly = new0 Polysegment(mVFormat, vbuffer, true);
	poly->SetMaterialInstance(VertexColor4Material::CreateUniqueInstance());

	UpdatePoly(curve, poly, axis, color);

	return poly;
}
//----------------------------------------------------------------------------
void TimeLineEdit::UpdatePoly(PX2::InterpCurveFloat3 *curve, PX2::Polysegment *p,
	int axis, Float3 color)
{
	int keyNum = curve->GetNumPoints();
	if (0 == keyNum) return;

	float outValMin = curve->Eval(-mMaxRange, Float3::ZERO)[axis];
	float outValMax = curve->Eval(mMaxRange, Float3::ZERO)[axis];

	VertexFormat *vFormat = p->GetVertexFormat();
	VertexBuffer *vBuffer = p->GetVertexBuffer();
	VertexBufferAccessor vba(vFormat, vBuffer);

	int numPoints = 0;
	vba.Position<Float3>(numPoints) = Float3(-mMaxRange, 0.0f, outValMin);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	for (int i = 0; i < keyNum - 1; i++)
	{
		const InterpCurvePoint<Float3> &point = curve->Points[i];
		const InterpCurvePoint<Float3> &pointP1 = curve->Points[i + 1];

		if (ICM_CONSTANT == point.InterpMode)
		{
			vba.Position<Float3>(numPoints) = Float3(point.InVal, 0.0f, point.OutVal[axis]);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
			vba.Position<Float3>(numPoints) = Float3(pointP1.InVal, 0.0f, point.OutVal[axis]);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
		}
		else if (ICM_LINEAR == point.InterpMode)
		{
			vba.Position<Float3>(numPoints) = Float3(point.InVal, 0.0f, point.OutVal[axis]);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
			vba.Position<Float3>(numPoints) = Float3(pointP1.InVal, 0.0f, pointP1.OutVal[axis]);
			vba.Color<Float3>(0, numPoints) = color;
			numPoints++;
		}
		else
		{
			for (int k = 0; k < 21; k++)
			{
				float inVal = Lerp<float, float>(point.InVal, pointP1.InVal, (float)k / 20.0f);
				float outVal = curve->Eval(inVal, Float3::ZERO)[axis];

				vba.Position<Float3>(numPoints) = Float3(inVal, 0.0f, outVal);
				vba.Color<Float3>(0, numPoints) = color;
				numPoints++;
			}
		}
	}

	const InterpCurvePoint<Float3> &lastPoint = curve->Points[keyNum - 1];
	vba.Position<Float3>(numPoints) = Float3(lastPoint.InVal, 0.0f, lastPoint.OutVal[axis]);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	vba.Position<Float3>(numPoints) = Float3(mMaxRange, 0.0f, outValMax);
	vba.Color<Float3>(0, numPoints) = color;
	numPoints++;

	p->SetNumSegments(numPoints - 1);
	p->UpdateModelSpace(Renderable::GU_MODEL_BOUND_ONLY);

	Renderer::UpdateAll(vBuffer);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Fit_Hor()
{
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_FitHor);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Fit_Ver()
{
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_FitVer);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Fit_All()
{
	Fit_Hor();
	Fit_Ver();
}
//----------------------------------------------------------------------------
void TimeLineEdit::Fit_Selected()
{
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_Fit_Selected);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Pan()
{
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_Pan);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Zoom()
{
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_Zoom);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Auto()
{
	int mode = ICM_CURVE_AUTO;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Clamp()
{
	int mode = ICM_CURVE_AUTOCLAMPED;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::User()
{
	int mode = ICM_CURVE_USER;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Break()
{
	int mode = ICM_CURVE_BREAK;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Linear()
{
	int mode = ICM_LINEAR;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------
void TimeLineEdit::Constant()
{
	int mode = ICM_CONSTANT;
	Event *ent = EditEventSpace::CreateEventX(EditEventSpace::TimeLine_CurveMode);
	ent->SetData<int>(mode);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------