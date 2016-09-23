// PX2UIObjectCtrl.cpp

#include "PX2UIObjectCtrl.hpp"
#include "PX2GeoObjFactory.hpp"
#include "PX2Edit.hpp"
#include "PX2UIPicBox.hpp"
#include "PX2UIButton.hpp"
#include "PX2UIProgressBar.hpp"
#include "PX2UIEditBox.hpp"
#include "PX2SelectionManager.hpp"
#include "PX2EditEventType.hpp"
#include "PX2Project.hpp"
#include "PX2GraphicsEventType.hpp"
#include "PX2Picker.hpp"
#include "PX2Renderer.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
UIObjectCtrl::UIObjectCtrl ()
{
	mDragIndex = -1;
	mSmallRectSize = 8.0f;

	mShapeType = ST_NONE;

	mCtrlsGroup = new0 SwitchNode();

	GeoObjFactory factory;

	mRectCtrl = factory.CreateUIRectCtrl(mSmallRectSize);	
	mCrossCtrl = factory.CreateUICrossCtrl();
	
	mCtrlsGroup->AttachChild(new0 Node());
	mCtrlsGroup->AttachChild(mRectCtrl);
	mCtrlsGroup->AttachChild(mCrossCtrl);
}
//----------------------------------------------------------------------------
UIObjectCtrl::~UIObjectCtrl ()
{
	PX2_EW.GoOut(this);
}
//----------------------------------------------------------------------------
void UIObjectCtrl::SetShapeType (ShapeType type)
{
	mShapeType = type;

	mCtrlsGroup->SetActiveChild((int)mShapeType);
	mCtrlsGroup->Update(Time::GetTimeInSeconds(), false);
}
//----------------------------------------------------------------------------
UIObjectCtrl::ShapeType UIObjectCtrl::GetShapeType()
{
	return mShapeType;
}
//----------------------------------------------------------------------------
int UIObjectCtrl::GetDragIndex()
{
	return mDragIndex;
}
//----------------------------------------------------------------------------
PX2::Movable *UIObjectCtrl::GetCtrlsGroup()
{
	return mCtrlsGroup;
}
//----------------------------------------------------------------------------
void UIObjectCtrl::OnEvent (PX2::Event *event)
{
	//if (EditES::IsEqual(event, EditES::AddSelect) ||
	//	EditES::IsEqual(event, EditES::RemoveSelect) ||
	//	EditES::IsEqual(event, EditES::RemoveAllSelects))
	//{
	//	UpdateOnSelectUI();
	//}
	//else if (EditEventSpace::IsEqual(event, EditEventSpace::ObjectTransformChanged))
	//{
	//	Object *obj = event->GetData<Object*>();
	//	if (PX2_SELECTM_E->GetFirstObject() == obj)
	//	{
	//		UpdateOnSelectUI();
	//	}
	//}
}
//----------------------------------------------------------------------------
void UIObjectCtrl::UpdateOnSelectUI()
{
	SetShapeType(ST_NONE);

	bool isCross = false;
	Sizef size;
	Float2 pvoit = Float2::ZERO;

	if (PX2_SELECTM_E->GetNumObjects() > 1) return;

	Object *obj = PX2_SELECTM_E->GetFirstObject();
	if (!obj) return;
	
	Movable *mov = DynamicCast<Movable>(obj);
	SizeNode *sn = DynamicCast<SizeNode>(obj);
	if (!mov) return;

	if (sn)
	{
		isCross = true;
		pvoit = sn->GetPivot();
		size = sn->GetSize();
	}
	else
	{
		SetShapeType(ST_NONE);
		return;
	}

	if (isCross)
	{
		mCrossCtrl->WorldTransformIsCurrent = true;
		mCrossCtrl->WorldTransform = mov->WorldTransform;

		SetShapeType(ST_CROSS);
	}
	else
	{
		float width = size.Width;
		float height = size.Height;

		VertexBufferAccessor vba;
		PolysegmentPtr polySeg = DynamicCast<Polysegment>(mRectCtrl->GetChild(0));
		vba.ApplyTo(polySeg);

		APoint point0 = APoint(0.0f - width*pvoit[0], 0.0f, 0.0f - height*pvoit[1]);
		APoint point1 = APoint(width*(1.0f - pvoit[0]), 0.0f, 0.0f - height*pvoit[1]);
		APoint point2 = APoint(width*(1.0f - pvoit[0]), 0.0f, height*(1.0f - pvoit[1]));
		APoint point3 = APoint(0.0f - width*pvoit[0], 0.0f, height*(1.0f - pvoit[1]));

		vba.Position<Float3>(0) = point0;
		vba.Position<Float3>(1) = point1;
		vba.Position<Float3>(2) = point2;
		vba.Position<Float3>(3) = point3;
		vba.Position<Float3>(4) = point0;
		vba.Color<Float4>(0, 0) = Float4::BLACK;
		vba.Color<Float4>(0, 1) = Float4::BLACK;
		vba.Color<Float4>(0, 2) = Float4::BLACK;
		vba.Color<Float4>(0, 3) = Float4::BLACK;
		vba.Color<Float4>(0, 4) = Float4::BLACK;

		polySeg->UpdateModelSpace(Renderable::GU_MODEL_BOUND_ONLY);		
		Renderer::UpdateAll(polySeg->GetVertexBuffer());

		APoint p0 = APoint(point0.X()-mSmallRectSize, 0.0f, point0.Z()-mSmallRectSize);
		APoint p1 = APoint(point1.X(), 0.0f, point1.Z()-mSmallRectSize);
		APoint p2 = point2;
		APoint p3 = APoint(point3.X()-mSmallRectSize, 0.0f, point3.Z());

		mRectCtrl->GetChild(1)->LocalTransform.SetTranslate(p0);
		mRectCtrl->GetChild(2)->LocalTransform.SetTranslate((p0+p1)/2.0f);
		mRectCtrl->GetChild(3)->LocalTransform.SetTranslate(p1);
		mRectCtrl->GetChild(4)->LocalTransform.SetTranslate((p1+p2)/2.0f);
		mRectCtrl->GetChild(5)->LocalTransform.SetTranslate(p2);
		mRectCtrl->GetChild(6)->LocalTransform.SetTranslate((p2+p3)/2.0f);
		mRectCtrl->GetChild(7)->LocalTransform.SetTranslate(p3);
		mRectCtrl->GetChild(8)->LocalTransform.SetTranslate((p0+p3)/2.0f);

		mRectCtrl->WorldTransformIsCurrent = true;
		mRectCtrl->WorldTransform = mov->WorldTransform;

		SetShapeType(ST_RECT);
	}
}
//----------------------------------------------------------------------------
void UIObjectCtrl::SetDragIndex (int index)
{
	if (mDragIndex == index)
		return;

	mDragIndex = index;
}
//----------------------------------------------------------------------------
void UIObjectCtrl::OnLeftDown(Canvas *canvas, const PX2::APoint &pos)
{
	int index = _GetDragIndex(canvas, pos);
	SetDragIndex(index);
	UpdateOnSelectUI();
}
//----------------------------------------------------------------------------
void UIObjectCtrl::OnLeftUp(Canvas *canvas, const PX2::APoint &pos)
{
	PX2_UNUSED(canvas);
	PX2_UNUSED(pos);
}
//----------------------------------------------------------------------------
void UIObjectCtrl::OnMotion(bool leftDown, Canvas *canvas,
	PX2::APoint posNow, PX2::APoint posBefore)
{
	//if (leftDown)
	//{
	//	int dragIndex = GetDragIndex();

	//	if (0 == dragIndex)
	//	{
	//		posNow.Y() = renderer->GetHeight() - posNow.Y();
	//		posBefore.Y() = renderer->GetHeight() - posBefore.Y();

	//		TriMesh *meshHelp = EditSystem::GetSingleton().GetXZPlane();

	//		Camera *uiCam = UIManager::GetSingleton().GetDefaultView()->GetCamera();
	//		Camera *beforeCam = renderer->GetCamera();
	//		renderer->SetCamera(uiCam);

	//		APoint rayOrigin_Now;
	//		AVector rayDir_Now;
	//		renderer->GetPickRay((int)posNow.X(), (int)posNow.Y(), 
	//			rayOrigin_Now, rayDir_Now);

	//		APoint rayOrigin_Before;
	//		AVector rayDir_Before;
	//		renderer->GetPickRay((int)posBefore.X(), (int)posBefore.Y(), 
	//			rayOrigin_Before, rayDir_Before);

	//		renderer->SetCamera(beforeCam);

	//		Picker pickerNow;
	//		pickerNow.Execute(meshHelp, rayOrigin_Now, rayDir_Now, 0.0f,
	//			Mathf::MAX_REAL);
	//		float lengthNow = pickerNow.GetClosestToZero().T;
	//		APoint positionNow(rayOrigin_Now + rayDir_Now*lengthNow);

	//		Picker pickerOrigin;
	//		pickerOrigin.Execute(meshHelp, rayOrigin_Before, rayDir_Before, 0.0f,
	//			Mathf::MAX_REAL);
	//		float lengthBefore = pickerOrigin.GetClosestToZero().T;
	//		APoint positionBefore(rayOrigin_Before + rayDir_Before*lengthBefore);

	//		if (pickerNow.Records.empty() || pickerOrigin.Records.empty())
	//			return;

	//		AVector transMoved = positionNow - positionBefore;
	//		AVector transDir = transMoved;
	//		transDir.Normalize();		

	//		Event *ent = EditorEventSpace::CreateEventX(EditorEventSpace::UIPosDrag);
	//		ent->SetData(1);
	//		EventWorld::GetSingleton().BroadcastingLocalEvent(ent);


	//		Movable *mov = DynamicCast<Movable>(
	//			EditSystem::GetSingleton().GetSelection()->GetObjectAt(0));
	//		Movable *movPar = 0;
	//		if (mov)
	//		{
	//			movPar = mov->GetParent();
	//		}

	//		if (movPar)
	//		{
	//			transMoved = movPar->LocalTransform.Inverse() * transMoved;
	//		}
	//		
	//		EditSystem::GetSingleton().GetSelection()->Translate(transMoved);
	//	
	//		if (mov)
	//		{
	//			int active = mCtrlsGroup->GetActiveChild();
	//			mCtrlsGroup->GetChild(active)->WorldBoundIsCurrent = true;
	//			mCtrlsGroup->GetChild(active)->WorldTransform = mov->WorldTransform;
	//		}
	//	}
	//}
}
//----------------------------------------------------------------------------
int UIObjectCtrl::_GetDragIndex(Canvas *canvas, const PX2::APoint &pos)
{
	//Project *proj = Project::GetSingletonPtr();
	//if (!proj) return -1;

	//UIFrame *uiFrame = proj->GetUIFrame();

	//APoint origin;
	//AVector direction;
	//canvas->GetPickRay(pos[0], pos[2], origin, direction);

	//ObjectPtr curSelectObj = PX2_SELECTM_E->GetFirstObject();

	//PX2::Picker picker;
	//PX2::MovablePtr pickedMove = 0;
	//picker.Execute(uiFrame, origin, direction, 0.0f, Mathf::MAX_REAL);

	//if ((int)picker.Records.size() > 0)
	//{
	//	const PickRecord &rec = picker.GetClosestNonnegative();
	//	pickedMove = rec.Intersected;

	//	UIPicBox *picBox = DynamicCast<UIPicBox>(pickedMove);
	//	UIFrame *uiFrame = DynamicCast<UIFrame>(pickedMove);

	//	Movable *movPar = pickedMove->GetParent();
	//	UIButton *butPar = DynamicCast<UIButton>(movPar);
	//	UIProgressBar *progBarPar = DynamicCast<UIProgressBar>(movPar);
	//	UIEditBox *editBoxPar = DynamicCast<UIEditBox>(movPar);

	//	if (curSelectObj == pickedMove || curSelectObj == movPar) return 0;
	//	else
	//	{
	//		PX2_SELECTM_E->Clear();

	//		if (uiFrame || butPar || progBarPar || editBoxPar)
	//		{
	//			PX2_SELECTM_E->AddObject(movPar);
	//		}
	//		else if (picBox)
	//		{
	//			PX2_SELECTM_E->AddObject(picBox);
	//		}
	//	}

	//	return 0;
	//}
	//else
	//{
	//	PX2_SELECTM_E->Clear();
	//	
	//	return -1;
	//}

	return -1;
}
//----------------------------------------------------------------------------