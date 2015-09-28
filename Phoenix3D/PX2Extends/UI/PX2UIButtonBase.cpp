// PX2UIButtonBase.cpp

#include "PX2UIButtonBase.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, UIFrame, UIButtonBase);
PX2_IMPLEMENT_STREAM(UIButtonBase);
PX2_IMPLEMENT_ABSTRACT_FACTORY(UIButtonBase);
PX2_IMPLEMENT_DEFAULT_NAMES(UIFrame, UIButtonBase);

//----------------------------------------------------------------------------
UIButtonBase::UIButtonBase() :
mButtonState(BS_NORMAL)
{
}
//----------------------------------------------------------------------------
UIButtonBase::~UIButtonBase()
{
}
//----------------------------------------------------------------------------
void UIButtonBase::SetPvoit(const Float2 &pvoit)
{
	if (mPicBoxNormal)
		mPicBoxNormal->SetPivot(pvoit);

	if (mPicBoxOver)
		mPicBoxOver->SetPivot(pvoit);

	if (mPicBoxDown)
		mPicBoxDown->SetPivot(pvoit);

	if (mPicBoxDisabled)
		mPicBoxDisabled->SetPivot(pvoit);
		
	UIFrame::SetPvoit(pvoit);
}
//----------------------------------------------------------------------------
void UIButtonBase::SetButtonState(ButtonState state)
{
	mButtonState = state;

	Movable::CullingMode normalCull = Movable::CULL_ALWAYS;
	Movable::CullingMode overCull = Movable::CULL_ALWAYS;
	Movable::CullingMode downCull = Movable::CULL_ALWAYS;
	Movable::CullingMode disableCull = Movable::CULL_ALWAYS;

	if (BS_NORMAL == mButtonState)
	{
		normalCull = Movable::CULL_DYNAMIC;
	}
	else if (BS_HOVERED == mButtonState)
	{
		overCull = Movable::CULL_DYNAMIC;
	}
	else if (BS_PRESSED == mButtonState)
	{
		downCull = Movable::CULL_DYNAMIC;
	}
	else if (BS_DISABLED == mButtonState)
	{
		disableCull = Movable::CULL_DYNAMIC;
	}

	if (mPicBoxNormal)
		mPicBoxNormal->Culling = normalCull;

	if (mPicBoxOver)
		mPicBoxOver->Culling = overCull;

	if (mPicBoxDown)
		mPicBoxDown->Culling = downCull;

	if (mPicBoxDisabled)
		mPicBoxDisabled->Culling = disableCull;
}
//----------------------------------------------------------------------------
void UIButtonBase::SetPicBox(ButtonState state, UIPicBox *pic)
{
	switch (state)
	{
	case BS_NORMAL:
		if (mPicBoxNormal)
		{
			DetachChild(mPicBoxNormal);
		}
		mPicBoxNormal = pic;
		break;

	case BS_HOVERED:
		if (mPicBoxOver)
		{
			DetachChild(mPicBoxOver);
		}
		mPicBoxOver = pic;
		break;

	case BS_PRESSED:
		if (mPicBoxDown)
		{
			DetachChild(mPicBoxDown);
		}
		mPicBoxDown = pic;
		break;

	case BS_DISABLED:
		if (mPicBoxDisabled)
		{
			DetachChild(mPicBoxDisabled);
		}
		mPicBoxDisabled = pic;
		break;

	default:
		break;
	}

	if (pic)
	{
		AttachChild(pic);
	}
}
//----------------------------------------------------------------------------
UIPicBox *UIButtonBase::GetPicBoxAtState(ButtonState state)
{
	switch (state)
	{
	case BS_NORMAL:
		return mPicBoxNormal;
		break;
	case BS_HOVERED:
		if (mPicBoxOver)
			return mPicBoxOver;
		break;
	case BS_PRESSED:
		if (mPicBoxDown)
			return mPicBoxDown;
		break;
	case BS_DISABLED:
		if (mPicBoxDisabled)
			return mPicBoxDisabled;
		break;
	default:
		break;
	}

	return 0;
}
//----------------------------------------------------------------------------
UIText *UIButtonBase::CreateAddText()
{
	if (mText)
	{
		DetachChild(mText);
		mText = 0;
	}

	mText = new0 UIText();
	AttachChild(mText);
	mText->LocalTransform.SetTranslateY(-5.0f);

	return mText;
}
//----------------------------------------------------------------------------
void UIButtonBase::OnSizeChanged()
{
	if (mPicBoxNormal)
		mPicBoxNormal->SetSize(mSize);

	if (mPicBoxOver)
		mPicBoxOver->SetSize(mSize);

	if (mPicBoxDown)
		mPicBoxDown->SetSize(mSize);

	if (mPicBoxDisabled)
		mPicBoxDisabled->SetSize(mSize);
}
//----------------------------------------------------------------------------
void UIButtonBase::UpdateWorldData(double applicationTime, double elapsedTime)
{
	UIFrame::UpdateWorldData(applicationTime, elapsedTime);
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Property
//----------------------------------------------------------------------------
void UIButtonBase::RegistProperties()
{
	UIFrame::RegistProperties();

	AddPropertyClass("UIButtonBase");
	AddProperty("Size", PT_SIZE, Any(GetSize()));
}
//----------------------------------------------------------------------------
void UIButtonBase::OnPropertyChanged(const PropertyObject &obj)
{
	UIFrame::OnPropertyChanged(obj);

	if ("Size" == obj.Name)
	{
		SetSize(*Any_Cast<Sizef>(&obj.Data));
	}
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
UIButtonBase::UIButtonBase(LoadConstructor value) :
UIFrame(value),
mButtonState(BS_NORMAL)
{
}
//----------------------------------------------------------------------------
void UIButtonBase::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	UIFrame::Load(source);
	PX2_VERSION_LOAD(source);

	source.ReadPointer(mPicBoxNormal);
	source.ReadPointer(mPicBoxOver);
	source.ReadPointer(mPicBoxDown);
	source.ReadPointer(mPicBoxDisabled);
	source.ReadEnum(mButtonState);

	PX2_END_DEBUG_STREAM_LOAD(UIButtonBase, source);
}
//----------------------------------------------------------------------------
void UIButtonBase::Link(InStream& source)
{
	UIFrame::Link(source);

	source.ResolveLink(mPicBoxNormal);
	source.ResolveLink(mPicBoxOver);
	source.ResolveLink(mPicBoxDown);
	source.ResolveLink(mPicBoxDisabled);
}
//----------------------------------------------------------------------------
void UIButtonBase::PostLink()
{
	UIFrame::PostLink();
}
//----------------------------------------------------------------------------
bool UIButtonBase::Register(OutStream& target) const
{
	if (UIFrame::Register(target))
	{
		target.Register(mPicBoxNormal);
		target.Register(mPicBoxOver);
		target.Register(mPicBoxDown);
		target.Register(mPicBoxDisabled);

		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void UIButtonBase::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	UIFrame::Save(target);
	PX2_VERSION_SAVE(target);

	target.WritePointer(mPicBoxNormal);
	target.WritePointer(mPicBoxOver);
	target.WritePointer(mPicBoxDown);
	target.WritePointer(mPicBoxDisabled);
	target.WriteEnum(mButtonState);

	PX2_END_DEBUG_STREAM_SAVE(UIButtonBase, target);
}
//----------------------------------------------------------------------------
int UIButtonBase::GetStreamingSize(Stream &stream) const
{
	int size = UIFrame::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	size += PX2_POINTERSIZE(mPicBoxNormal);
	size += PX2_POINTERSIZE(mPicBoxOver);
	size += PX2_POINTERSIZE(mPicBoxDown);
	size += PX2_POINTERSIZE(mPicBoxDisabled);
	size += PX2_ENUMSIZE(mButtonState);

	return size;
}
//----------------------------------------------------------------------------
