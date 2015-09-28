// PX2ApplicationBase.hpp

#ifndef PX2APPLICATIONBASE_HPP
#define PX2APPLICATIONBASE_HPP

#include "PX2AppFramePre.hpp"

namespace PX2
{

	class PX2_EXTENDS_ITEM ApplicationBase
	{
	protected:
		ApplicationBase ();
	public:
		virtual ~ApplicationBase ();

		// App
		static ApplicationBase* msApplication;

		static bool IsInitlized ();
		virtual bool Initlize ();
		virtual bool Ternamate ();

		virtual void SetTitle(const std::string &title);
		const std::string &GetTitle() const;

		virtual void OnSize (int width, int height);
		virtual void WillEnterForeground (bool isFirstTime);
		virtual void DidEnterBackground ();
		bool IsIsInBackground () const;

		int GetWidth () const;
		int GetHeight() const;

		virtual bool OnIdle ();

		// Enteries
		typedef bool (*AppInitlizeFun)();
		static AppInitlizeFun msAppInitlizeFun;
		typedef bool (*AppTernamateFun)();
		static AppTernamateFun msAppTernamateFun;
		typedef int (*EntryPoint)(int numArguments, char** arguments);
		static EntryPoint msEntry;

		virtual int Main (int numArguments, char** arguments);

	protected:
		bool _LoadProject(const std::string &projFilename);

		static bool msIsInitlized;
	
		// ��Ⱦ���
		// ���ڲ���
		std::string mWindowTitle;
		int mXPosition, mYPosition, mWidth, mHeight;
		bool mAllowResize;
	};

}

#endif