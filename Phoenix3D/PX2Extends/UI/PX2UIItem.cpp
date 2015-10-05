// PX2UIItem.cpp

#include "PX2UIItem.hpp"
#include "PX2UITree.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, UIFrame, UIItem);
PX2_IMPLEMENT_STREAM(UIItem);
PX2_IMPLEMENT_FACTORY(UIItem);

//----------------------------------------------------------------------------
UIItem::UIItem() :
mIsNeedRecal(true),
mIsExpand(true),
mIsNumAllChildExpandNeedRecal(true),
mNumAllChildExpand(0),
mLevel(0),
mNumChildItem(0)
{
	mButBack = new0 UIButton();
	AttachChild(mButBack);
	mButBack->LocalTransform.SetTranslateY(-5.0f);
	UIPicBox *picBoxNormal = mButBack->GetPicBoxAtState(UIButtonBase::BS_NORMAL);
	picBoxNormal->SetTexture("Data/engine/white.png");
	picBoxNormal->SetColor(Float3::MakeColor(52, 52, 52));
	UIPicBox *picBoxPressed = mButBack->GetPicBoxAtState(UIButtonBase::BS_PRESSED);
	picBoxPressed->SetTexture("Data/engine/white.png");
	picBoxPressed->SetColor(Float3::MakeColor(128, 128, 128));
	mButBack->SetAnchorHor(0.0f, 1.0f);
	mButBack->SetAnchorVer(0.0f, 1.0f);
	mButBack->SetAnchorParamVer(1.0f, 0.0f);

	mText = new0 UIText();
	AttachChild(mText);
	mText->LocalTransform.SetTranslateY(-10.0f);
	mText->SetRectUseage(UIText::RU_ALIGNS);
	mText->SetAligns(TEXTALIGN_LEFT | TEXTALIGN_VCENTER);
	mText->SetFontScale(0.6f);
	mText->SetFontColor(Float3::MakeColor(120, 120, 120));
}
//----------------------------------------------------------------------------
UIItem::~UIItem()
{
}
//----------------------------------------------------------------------------
UIItem *UIItem::AddItem(const std::string &label)
{
	UIItem *item = new0 UIItem();
	AttachChild(item);
	item->SetName(label);
	item->SetSize(GetSize());
	item->_SetLevel(_GetLevel() + 1);
	item->GetText()->SetText(label);

	return item;
}
//----------------------------------------------------------------------------
void UIItem::OnChildAdded(Movable *child)
{
	UIItem *item = DynamicCast<UIItem>(child);
	if (item)
	{
		mIsNeedRecal = true;
		mIsNumAllChildExpandNeedRecal = true;

		mNumChildItem++;
	}

	_TellParentChildrenRecal();
}
//----------------------------------------------------------------------------
void UIItem::OnChildRemoved(Movable *child)
{
	UIItem *item = DynamicCast<UIItem>(child);
	if (item)
	{
		mIsNeedRecal = true;
		mIsNumAllChildExpandNeedRecal = true;

		mNumChildItem--;
	}

	_TellParentChildrenRecal();
}
//----------------------------------------------------------------------------
void UIItem::Expand(bool expand)
{
	mIsExpand = expand;

	if (IAS_NONE != mIconArrowState)
	{
		SetIconArrowState(expand ? IAS_ARROW1 : IAS_ARROW0);
	}

	mIsNumAllChildExpandNeedRecal = true;

	_TellParentChildrenRecal();
}
//----------------------------------------------------------------------------
void UIItem::_TellParentChildrenRecal()
{
	UIItem *parentItem = DynamicCast<UIItem>(GetParent());
	if (parentItem)
	{
		for (int i = 0; i < parentItem->GetNumChildren(); i++)
		{
			UIItem *parentChildItem = DynamicCast<UIItem>(
				parentItem->GetChild(i));
			if (parentChildItem)
			{
				parentChildItem->mIsNeedRecal = true;
			}
		}
	}
}
//----------------------------------------------------------------------------
void UIItem::SetLabel(const std::string &label)
{
	mText->SetText(label);
}
//----------------------------------------------------------------------------
const std::string &UIItem::GetLabel() const
{
	return mText->GetText();
}
//----------------------------------------------------------------------------
void UIItem::OnSizeChanged()
{
	UIFrame::OnSizeChanged();

	mText->SetRect(Rectf(-mSize.Width / 2.0f, -mSize.Height / 2.0f,
		mSize.Height / 2.0f, mSize.Height / 2.0f));
}
//----------------------------------------------------------------------------
void UIItem::SetIconArrowState(IconArrowState state)
{
	mIconArrowState = state;

	mIsNeedRecal = true;
}
//----------------------------------------------------------------------------
void UIItem::UpdateWorldData(double applicationTime, double elapsedTime)
{
	if (mIsNumAllChildExpandNeedRecal)
	{
		_RecalNumChildExpand();
	}

	if (mIsNeedRecal)
	{
		_Recal();
	}

	UIFrame::UpdateWorldData(applicationTime, elapsedTime);
}
//----------------------------------------------------------------------------
void UIItem::_RecalNumChildExpand()
{
	mIsNumAllChildExpandNeedRecal = false;

	int numChildren = GetNumChildren();

	for (int i = 0; i < GetNumChildren(); i++)
	{
		UIItem *item = DynamicCast<UIItem>(GetChild(i));
		if (item)
		{
			item->_RecalNumChildExpand();
		}
	}

	mNumAllChildExpand = 1;
	if (mIsExpand)
	{
		for (int i = 0; i < GetNumChildren(); i++)
		{
			UIItem *item = DynamicCast<UIItem>(GetChild(i));
			if (item)
			{
				mNumAllChildExpand += item->GetNumAllChildsExpand();
			}
		}
	}
	else
	{
		mNumAllChildExpand = 1;
	}
}
//----------------------------------------------------------------------------
void UIItem::_Recal()
{
	mIsNeedRecal = false;

	int numLevels = 0;
	UITree *tree = DynamicCast<UITree>(GetFirstParentDerivedFromType(
		UITree::TYPE, &numLevels));
	if (tree)
	{
		float iconArrowSpace = tree->GetIconArrowSpace();
		float itemHeight = tree->GetItemHeight();

		int numItemExtend = 0;
		for (int i = 0; i < GetNumChildren(); i++)
		{
			UIItem *item = DynamicCast<UIItem>(GetChild(i));
			if (item)
			{
				item->SetAnchorHor(0.0f, 1.0f);
				item->SetAnchorVer(1.0f, 1.0f);
				item->SetAnchorParamVer(
					-itemHeight / 2.0f - itemHeight * (numItemExtend + 1), 0.0f);
				int itemLevel = item->_GetLevel();
				UIText *text = item->GetText();
				text->SetOffset(Float2(itemLevel*iconArrowSpace, 0.0f));

				item->Show(mIsExpand);

				numItemExtend += item->GetNumAllChildsExpand();
			}
		}
	}
}
//----------------------------------------------------------------------------
void UIItem::_SetLevel(int level)
{
	mLevel = level;
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
UIItem::UIItem(LoadConstructor value) :
UIFrame(value),
mIsNeedRecal(true),
mIsExpand(true),
mIsNumAllChildExpandNeedRecal(true),
mNumAllChildExpand(0),
mLevel(0),
mNumChildItem(0)
{
}
//----------------------------------------------------------------------------
void UIItem::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	UIFrame::Load(source);
	PX2_VERSION_LOAD(source);

	PX2_END_DEBUG_STREAM_LOAD(UIItem, source);
}
//----------------------------------------------------------------------------
void UIItem::Link(InStream& source)
{
	UIFrame::Link(source);

	if (mIPTCtrl)
		source.ResolveLink(mIPTCtrl);
}
//----------------------------------------------------------------------------
void UIItem::PostLink()
{
	UIFrame::PostLink();
}
//----------------------------------------------------------------------------
bool UIItem::Register(OutStream& target) const
{
	if (UIFrame::Register(target))
	{
		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void UIItem::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	UIFrame::Save(target);
	PX2_VERSION_SAVE(target);

	PX2_END_DEBUG_STREAM_SAVE(UIItem, target);
}
//----------------------------------------------------------------------------
int UIItem::GetStreamingSize(Stream &stream) const
{
	int size = UIFrame::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	return size;
}
//----------------------------------------------------------------------------