// PX2UIButton.cpp

#include "PX2UIButton.hpp"
#include "PX2ResourceManager.hpp"
#include "PX2UIDefine.hpp"
#include "PX2UIView.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, UIButtonBase, UIButton);
PX2_IMPLEMENT_STREAM(UIButton);
PX2_IMPLEMENT_FACTORY(UIButton);
PX2_IMPLEMENT_DEFAULT_NAMES(UIButtonBase, UIButton);

//----------------------------------------------------------------------------
UIButton::UIButton() :
mAfterReleasedType(ART_NORMAL),
mIsRecoverBegin(false),
mAfterReleasedRecoverTime(6.0f),
mRecoverBeginTime(0.0f)
{
	SetName("UIButton");

	UIPicBox *picNormal = new0 UIPicBox("Data/engine/common.xml", "but_normal");
	picNormal->SetName("Normal");
	picNormal->SetPicBoxType(UIPicBox::PBT_NINE);

	UIPicBox *picOver = new0 UIPicBox("Data/engine/common.xml", "but_over");
	picOver->SetName("Over");
	picOver->SetPicBoxType(UIPicBox::PBT_NINE);

	UIPicBox *picDown = new0 UIPicBox("Data/engine/common.xml", "but_down");
	picDown->SetName("Down");
	picDown->SetPicBoxType(UIPicBox::PBT_NINE);

	UIPicBox *picDis = new0 UIPicBox("Data/engine/common.xml", "but_dis");
	picDis->SetName("Dis");
	picDis->SetPicBoxType(UIPicBox::PBT_NINE);

	SetPicBox(BS_NORMAL, picNormal);
	SetPicBox(BS_HOVERED, picOver);
	SetPicBox(BS_PRESSED, picDown);
	SetPicBox(BS_DISABLED, picDis);

	SetButtonState(BS_NORMAL);

	SetSize(40.0f, 40.0f);
}
//----------------------------------------------------------------------------
UIButton::~UIButton()
{
}
//----------------------------------------------------------------------------
void UIButton::Enable(bool enable)
{
	UIButtonBase::Enable(enable);

	SetButtonState(enable ? UIButtonBase::BS_NORMAL:UIButtonBase::BS_DISABLED);
}
//----------------------------------------------------------------------------
void UIButton::SetAfterReleasedType(AfterReleasedType type)
{
	if (type == mAfterReleasedType)
		return;

	Enable(true);
	mAfterReleasedType = type;

	if (ART_NORMAL == mAfterReleasedType ||
		ART_DISABLE == mAfterReleasedType)
	{
		mAfterReleasedRecoverTime = 0.0f;
		mIsRecoverBegin = false;
		mRecoverBeginTime = (float)Time::GetTimeInSeconds();
	}
}
//----------------------------------------------------------------------------
void UIButton::OnEvent(Event *event)
{
	PX2_UNUSED(event);
}
//----------------------------------------------------------------------------
void UIButton::OnPressed()
{
	//GraphicsRoot::PlayType playType = PX2_GR.GetPlayType();
	//if (GraphicsRoot::PT_PLAY != playType) return;

	if (mUICallback)
	{
		mUICallback(this, UICT_PRESSED);
	}

	if (mMemObject && mMemUICallback)
	{
		(mMemObject->*mMemUICallback)(this, UICT_PRESSED);
	}

	std::vector<Visitor *>::iterator it = mVisitors.begin();
	for (; it != mVisitors.end(); it++)
	{
		(*it)->Visit(this, (int)UICT_PRESSED);
	}

	if (!mUIScriptHandler.empty())
	{
		CallString(mUIScriptHandler.c_str(), "i", (int)UICT_PRESSED);
	}
}
//----------------------------------------------------------------------------
void UIButton::OnReleased()
{
	if (ART_DISABLE == mAfterReleasedType)
	{
		Enable(false);
	}
	else if (ART_DISABLE_RECOVER == mAfterReleasedType)
	{
		Enable(false);
		mIsRecoverBegin = true;
		mRecoverBeginTime = (float)Time::GetTimeInSeconds();
	}

	//GraphicsRoot::PlayType playType = PX2_GR.GetPlayType();
	//if (GraphicsRoot::PT_PLAY != playType) return;

	if (mUICallback)
	{
		mUICallback(this, UICT_RELEASED);
	}
	
	if (mMemObject && mMemUICallback)
	{
		(mMemObject->*mMemUICallback)(this, UICT_RELEASED);
	}

	std::vector<Visitor *>::iterator it = mVisitors.begin();
	for (; it != mVisitors.end(); it++)
	{
		(*it)->Visit(this, (int)UICT_RELEASED);
	}

	if (!mUIScriptHandler.empty())
	{
		CallString(mUIScriptHandler.c_str(), "i", (int)UICT_RELEASED);
	}
}
//----------------------------------------------------------------------------
void UIButton::UpdateWorldData(double applicationTime, double elapsedTime)
{
	UIButtonBase::UpdateWorldData(applicationTime, elapsedTime);

	if (mIsRecoverBegin)
	{
		float curTime = (float)Time::GetTimeInSeconds();

		if ((curTime - mRecoverBeginTime) > mAfterReleasedRecoverTime)
		{
			Enable(true);

			mIsRecoverBegin = false;
		}
	}
}
//----------------------------------------------------------------------------
void UIButton::OnChildPicked(int info, Movable *child)
{
	PX2_UNUSED(child);
	PX2_UNUSED(info);

	if (!IsEnable())
		return;

	UIFrame::OnChildPicked(info, child);

	ButtonState state = GetButtonState();

	if (UIPT_PRESSED == info)
	{
		if (state == BS_NORMAL || state == BS_HOVERED)
		{
			SetButtonState(BS_PRESSED);
			OnPressed();
		}
	}
	else if (UIPT_RELEASED == info)
	{
		if (state == BS_PRESSED)
		{
			SetButtonState(BS_HOVERED);
			OnReleased();
		}
	}
	else if (UIPT_MOVED == info)
	{
		if (state == BS_NORMAL)
		{
			SetButtonState(BS_HOVERED);
		}
	}
}
//----------------------------------------------------------------------------
void UIButton::OnNotPicked(int info)
{
	if (!IsEnable())
		return;
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Property
//----------------------------------------------------------------------------
void UIButton::RegistProperties()
{
	UIButtonBase::RegistProperties();

	AddPropertyClass("UIButton");

	std::vector<std::string> afterReleasedTypes;
	afterReleasedTypes.push_back("ART_NORMAL");
	afterReleasedTypes.push_back("ART_DISABLE");
	afterReleasedTypes.push_back("ART_DISABLE_RECOVER");
	AddPropertyEnum("AfterReleasedType", mAfterReleasedType,
		afterReleasedTypes);
	AddProperty("AfterReleasedRecoverTime", PT_FLOAT,
		GetAfterReleasedRecoverTime());
}
//----------------------------------------------------------------------------
void UIButton::OnPropertyChanged(const PropertyObject &obj)
{
	UIButtonBase::OnPropertyChanged(obj);

	if ("AfterReleasedType" == obj.Name)
	{
		SetAfterReleasedType((AfterReleasedType)*Any_Cast<int>(&obj.Data));
	}
	else if ("AfterReleasedRecoverTime" == obj.Name)
	{
		SetAfterReleasedRecoverTime(*Any_Cast<float>(&obj.Data));
	}
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
UIButton::UIButton(LoadConstructor value) :
UIButtonBase(value),
mAfterReleasedType(ART_NORMAL),
mAfterReleasedRecoverTime(6.0),
mIsRecoverBegin(false),
mRecoverBeginTime(0.0f)
{
}
//----------------------------------------------------------------------------
void UIButton::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	UIButtonBase::Load(source);
	PX2_VERSION_LOAD(source);

	source.ReadEnum(mAfterReleasedType);
	source.Read(mAfterReleasedRecoverTime);

	PX2_END_DEBUG_STREAM_LOAD(UIButton, source);
}
//----------------------------------------------------------------------------
void UIButton::Link(InStream& source)
{
	UIButtonBase::Link(source);
}
//----------------------------------------------------------------------------
void UIButton::PostLink()
{
	UIButtonBase::PostLink();
}
//----------------------------------------------------------------------------
bool UIButton::Register(OutStream& target) const
{
	return UIButtonBase::Register(target);
}
//----------------------------------------------------------------------------
void UIButton::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	UIButtonBase::Save(target);
	PX2_VERSION_SAVE(target);

	target.WriteEnum(mAfterReleasedType);
	target.Write(mAfterReleasedRecoverTime);

	PX2_END_DEBUG_STREAM_SAVE(UIButton, target);
}
//----------------------------------------------------------------------------
int UIButton::GetStreamingSize(Stream &stream) const
{
	int size = UIButtonBase::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	size += PX2_ENUMSIZE(mAfterReleasedType);
	size += sizeof(mAfterReleasedRecoverTime);

	return size;
}
//----------------------------------------------------------------------------
