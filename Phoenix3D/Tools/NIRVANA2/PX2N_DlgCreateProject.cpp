// PX2DlgCreateProject.cpp

#include "PX2N_DlgCreateProject.hpp"
#include "PX2Assert.hpp"
using namespace NA;

BEGIN_EVENT_TABLE(DlgCreateProject, wxDialog)
EVT_BUTTON(wxID_ANY, DlgCreateProject::OnButton)
END_EVENT_TABLE()
//----------------------------------------------------------------------------
DlgCreateProject::DlgCreateProject(wxWindow *parent)
{
	const bool success =
		wxXmlResource::Get()->LoadDialog(this, parent, TEXT("CreateProject"));

	assertion(success, "LoadDialog failed!");
	PX2_UNUSED(success);

	mName = (wxTextCtrl*)FindWindow(XRCID("mName"));
	assertion(mName != 0, "Window must be find!");

	mChoiceScreenOrientation = (wxChoice *)FindWindow(XRCID("mScreenOrientation"));

	mWidth = (wxTextCtrl*)FindWindow(XRCID("mWidth"));
	assertion(mName != 0, "Window must be find!");

	mHeight = (wxTextCtrl*)FindWindow(XRCID("mHeight"));
	assertion(mName != 0, "Window must be find!");

	mOK = (wxButton*)FindWindow(XRCID("mOK"));
	assertion(mOK != 0, "Window must be find!");

	mCancel = (wxButton*)FindWindow(XRCID("mCancel"));
	assertion(mCancel != 0, "Window must be find!");
}
//----------------------------------------------------------------------------
void DlgCreateProject::OnButton(wxCommandEvent& event)
{
	if (event.GetEventObject() == mOK)
	{
		double dWidth = 0.0f;
		double dHeight = 0.0f;
		mWidth->GetValue().ToDouble(&dWidth);
		mHeight->GetValue().ToDouble(&dHeight);

		mProjName = mName->GetValue();
		mScreenOrientation = mChoiceScreenOrientation->GetSelection();
		mProjWidth = (int)dWidth;
		mProjHeight = (int)dHeight;

		EndDialog(wxID_OK);
	}
	else if (event.GetEventObject() == mCancel)
	{
		EndDialog(wxID_CANCEL);
	}
}
//----------------------------------------------------------------------------