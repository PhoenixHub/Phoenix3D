// PX2E_ResSplitPanel.cpp

#include "PX2E_ResSplitPanel.hpp"
#include "PX2E_ResTree.hpp"
#include "PX2E_RenderView.hpp"
using namespace PX2Editor;
using namespace PX2;

//----------------------------------------------------------------------------
ResSplitPanel::ResSplitPanel(wxWindow* parent, bool useSplit, wxWindowID id,
	const wxPoint& pos, const wxSize& size, long style) : wxPanel(parent, id, pos, size, style)
{
	SetBackgroundColour(wxColour(207, 214, 229));

	wxBoxSizer* sizer;
	sizer = new wxBoxSizer(wxVERTICAL);

	if (useSplit)
	{
		mSplitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_NOBORDER | wxSP_NO_XP_THEME);
		mSplitter->Connect(wxEVT_IDLE, wxIdleEventHandler(ResSplitPanel::mSplitterOnIdle), NULL, this);
		mSplitter->SetMinimumPaneSize(100);
		mSplitter->SetSashGravity(0.2f);
		mSplitter->SetBackgroundColour(wxColour(207, 214, 229));
		mSplitter->SetForegroundColour(wxColour(207, 214, 229));

		mLeftPanel = new wxPanel(mSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
		wxBoxSizer* leftSizer;
		leftSizer = new wxBoxSizer(wxVERTICAL);

		ResTree *resTree = new ResTree(mLeftPanel, true);
		leftSizer->Add(resTree, 1, wxEXPAND, 5);

		mLeftPanel->SetSizer(leftSizer);
		mLeftPanel->Layout();
		leftSizer->Fit(mLeftPanel);
		mRightPanel = new wxPanel(mSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
		wxBoxSizer* rightSizer;
		rightSizer = new wxBoxSizer(wxVERTICAL);

		RenderView *resShow = new RenderView(RVT_RES, mRightPanel);
		resShow->_NewEditRenderView("Res");
		rightSizer->Add(resShow, 1, wxEXPAND, 5);

		mRightPanel->SetSizer(rightSizer);
		mRightPanel->Layout();
		rightSizer->Fit(mRightPanel);
		mSplitter->SplitVertically(mLeftPanel, mRightPanel, 120);
		sizer->Add(mSplitter, 1, wxEXPAND, 5);
	}
	else
	{
		ResTree *resTree = new ResTree(this, false);
		sizer->Add(resTree, 1, wxEXPAND, 0);
	}

	this->SetSizer(sizer);
	this->Layout();
}
//----------------------------------------------------------------------------
ResSplitPanel::~ResSplitPanel()
{
}
//----------------------------------------------------------------------------
