// PX2E_ResTree.hpp

#ifndef PX2E_RESTREE_HPP
#define PX2E_RESTREE_HPP

#include "PX2EditorPre.hpp"
#include "PX2E_ResTreeItem.hpp"
#include "PX2Singleton_NeedNew.hpp"
#include "PX2EventHandler.hpp"

namespace PX2Editor
{

	class ResTree : public wxTreeCtrl, public PX2::EventHandler, public PX2::Singleton<ResTree>
	{
		DECLARE_DYNAMIC_CLASS(ResTree)

	public:
		ResTree(wxWindow *parent, bool isUseOnlyDir);
		virtual ~ResTree();

		ResTreeItem *GetItem(wxTreeItemId id);
		ResTreeItem *GetItem(const std::string &resPath);

		void UpdateOnPath(const std::string &pathName);

		void OnRightDown(wxMouseEvent& e);
		void OnRightUp(wxMouseEvent& e);
		void OnItemActivated(wxTreeEvent& event);
		void OnSelChanged(wxTreeEvent &ent);

		ResTreeItem* GetTreeRootItem();

		void ResRefresh();
		void ResClear();

		virtual void DoExecute(PX2::Event *event);

	public_internal:
		std::map<std::string, int> Icons;

	protected:
		DECLARE_EVENT_TABLE()
		ResTree();

		ResTreeItemPtr mRootItem;
		wxImageList *mImageList;

		wxSize mSize;

		wxMenu *mEditMenu;

		bool mIsUseOnlyDir;
	};

}

#endif