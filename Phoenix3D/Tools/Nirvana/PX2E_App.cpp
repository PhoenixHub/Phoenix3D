// PX2E_App.cpp

#include "PX2E_App.hpp"
#include "PX2E_MainFrame.hpp"
#include "PX2E_RenderView.hpp"
#include "PX2E_ResTree.hpp"
#include "PX2EngineLoop.hpp"
#include "PX2Edit.hpp"
#include "PX2ToLuaEditor.hpp"
#include "PX2LuaManager.hpp"
using namespace PX2Editor;
using namespace PX2;

//-----------------------------------------------------------------------------
IMPLEMENT_APP(PX2Editor::E_App)
//-----------------------------------------------------------------------------
E_App::E_App()
{
}
//-----------------------------------------------------------------------------
E_App::~E_App()
{
}
//-----------------------------------------------------------------------------
bool E_App::OnInit()
{
	PX2_ENGINELOOP.Initlize();
	PX2_EDIT.LoadEditorTheme();
	NirMan *nirMan = new0 NirMan();
	nirMan->Initlize();

	PX2_ENGINELOOP.Play(EngineLoop::PT_NONE);

	LuaManager *luaMan = (LuaManager*)ScriptManager::GetSingletonPtr();
	luaMan->CallFile("DataEditor/scripts/language.lua");
	tolua_PX2Editor_open(luaMan->GetLuaState());

	luaMan->CallFile("DataEditor/scripts/start.lua");

	luaMan->SetUserTypePointer("NirMan", "NirMan", nirMan);

	wxLog::SetLogLevel(0);

	wxImage::AddHandler(new wxBMPHandler());
	wxImage::AddHandler(new wxPNGHandler());
	wxImage::AddHandler(new wxGIFHandler());
	wxFileSystem::AddHandler(new wxArchiveFSHandler());
	wxXmlResource::Get()->InitAllHandlers();
	wxXmlResource::Get()->Load(wxT("DataEditor/wxfbp/*.xrc"));

	int displayWidth, displayHeight;
	wxDisplaySize(&displayWidth, &displayHeight);

	std::string title = "Nirvana";
	title += Renderer::GetRenderTag();

#if defined(_WIN64) || defined(WIN64)
	title += "64";
#endif

#ifdef _DEBUG
	title += "D";
#endif

	mMainFrame = new E_MainFrame(title, 0, 0, wxMin(1024, displayWidth), wxMin(768, displayHeight));

	luaMan->SetUserTypePointer("E_MainFrame", "E_MainFrame", mMainFrame);

	mMainFrame->Initlize();
	SetTopWindow(mMainFrame);
	mMainFrame->Center();
	mMainFrame->Maximize();

	PX2_ENGINELOOP.SetPt_Data(mMainFrame->GetRenderViewScene()->GetHandle());
	PX2_ENGINELOOP.SetPt_Size(Sizef(1024.0f, 768.0f));
	PX2_ENGINELOOP.InitlizeRenderer();

	mMainFrame->Show(true);

	return true;
}
//-----------------------------------------------------------------------------
int E_App::OnExit()
{
	NirMan *nirMan = NirMan::GetSingletonPtr();
	if (nirMan)
	{
		nirMan->Ternamate();
		delete0(nirMan);
		NirMan::Set(0);
	}

	PX2_ENGINELOOP.Ternamate();

	return 0;
}
//-----------------------------------------------------------------------------
int E_App::FilterEvent(wxEvent& event)
{
	if (event.GetEventType() == wxEVT_KEY_DOWN)
	{
		mMainFrame->OnShortcutKeyDown();
	}
	return -1;
}
//-----------------------------------------------------------------------------