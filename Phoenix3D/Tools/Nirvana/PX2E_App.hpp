// PX2E_App.hpp

#ifndef PX2E_APP_HPP
#define PX2E_APP_HPP

#include "PX2EditorPre.hpp"

namespace PX2Editor
{

	class E_MainFrame;

	class E_App : public wxApp
	{
	public:
		E_App();
		~E_App();

		virtual bool OnInit();
		virtual int OnExit();
		virtual int FilterEvent(wxEvent& event);

	protected:
		E_MainFrame *mMainFrame;
	};

	DECLARE_APP(E_App)
}

#endif