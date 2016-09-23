// PX2EU_GridFrame.cpp

#include "PX2EU_ResGridFrame.hpp"
#include "PX2Edit.hpp"
#include "PX2EU_ResGridItem.hpp"
#include "PX2EditorEventType.hpp"
#include "PX2Dir.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, UIGridFrame, EU_ResGridFrame);
PX2_IMPLEMENT_STREAM(EU_ResGridFrame);
PX2_IMPLEMENT_FACTORY(EU_ResGridFrame);

//----------------------------------------------------------------------------
EU_ResGridFrame::EU_ResGridFrame()
{
	ComeInEventWorld();

	UIFrameGridAlignControl *ctrl = mContentFrame->GetGridAlignCtrl();
	if (ctrl)
	{
		ctrl->SetBorder(2.0f, 2.0f, 2.0f, 2.0f);
		ctrl->SetCellSize(EU_ResGridItem::sGridItemSize);
		ctrl->SetCellSize(Sizef(90.0f, 90.0f));
		ctrl->SetAutoAdjustContentSize(true);
	}
}
//----------------------------------------------------------------------------
EU_ResGridFrame::~EU_ResGridFrame()
{
	GoOutEventWorld();
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::OnEvent(Event *event)
{
	if (EditorEventSpace::IsEqual(event, EditorEventSpace::RefreshRes))
	{
		const std::string &selectResDir = PX2_EDIT.GetSelectedResDir();
		if (!selectResDir.empty())
		{
			mSelectPath = selectResDir;

			RemoveAllItems();
			RefreshItems(selectResDir, Dir::DIR_DIRS);
			RefreshItems(selectResDir, Dir::DIR_FILES);
		}
	}
	else if (EditorEventSpace::IsEqual(event, EditorEventSpace::ChangeResDir))
	{
		Edit::ChangeDirType cdt = event->GetData<Edit::ChangeDirType>();
		if (cdt == Edit::CDT_TREE_REFRESH)
		{
			const std::string &selectResDir = PX2_EDIT.GetSelectedResDir();
			if (!selectResDir.empty())
			{
				mSelectPath = selectResDir;

				RemoveAllItems();
				RefreshItems(selectResDir, Dir::DIR_DIRS);
				RefreshItems(selectResDir, Dir::DIR_FILES);
			}
		}
	}
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::RefreshItems(const std::string &path, int flag)
{	
	if (path.empty()) return;

	std::string name;
	std::string compareStr = "Data/";
	if (path == compareStr)
		name = "Data";
	else
	{
		name = path.substr(compareStr.length(),
			path.length() - compareStr.length() - 1);
	}

	Dir d;
	std::string eachFilename;
	if (d.Open(path))
	{
		if (!d.HasFiles() && !d.HasSubDirs())
			return;

		int flags = 0;
		flags = flag;

		if (d.GetFirst(&eachFilename, "", flags))
		{
			do
			{
				if ((eachFilename != ".") && (eachFilename != ".."))
				{
					std::string baseFilename = eachFilename;
					std::string pathFilename = path + baseFilename;
					std::string pathFilenamePath = pathFilename + "/";

					EU_ResGridItem *itemChild = new0 EU_ResGridItem();
					AddItem(itemChild);
					itemChild->SetUserData("BaseFilename", baseFilename);
					itemChild->SetUserData("PathFilename", pathFilename);
					itemChild->SetUserData("PathFilenamePath", pathFilenamePath);
					itemChild->SetPathFilename(pathFilename);
				}

			} while (d.GetNext(&eachFilename));
		}
	}

	SetSliderPercent(0.0f);
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
EU_ResGridFrame::EU_ResGridFrame(LoadConstructor value) :
UIGridFrame(value)
{
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	UIGridFrame::Load(source);
	PX2_VERSION_LOAD(source);

	PX2_END_DEBUG_STREAM_LOAD(EU_ResGridFrame, source);
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::Link(InStream& source)
{
	UIGridFrame::Link(source);
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::PostLink()
{
	UIGridFrame::PostLink();
}
//----------------------------------------------------------------------------
bool EU_ResGridFrame::Register(OutStream& target) const
{
	if (UIGridFrame::Register(target))
	{
		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void EU_ResGridFrame::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	UIGridFrame::Save(target);
	PX2_VERSION_SAVE(target);

	PX2_END_DEBUG_STREAM_SAVE(EU_ResGridFrame, target);
}
//----------------------------------------------------------------------------
int EU_ResGridFrame::GetStreamingSize(Stream &stream) const
{
	int size = UIGridFrame::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	return size;
}
//----------------------------------------------------------------------------