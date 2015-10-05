// PX2EngineLoop.hpp

#ifndef PX2ENGINELOOP_HPP
#define PX2ENGINELOOP_HPP

#include "PX2Singleton.hpp"
#include "PX2DynLibManager.hpp"
#include "PX2PluginManager.hpp"
#include "PX2TimerManager.hpp"
#include "PX2EventWorld.hpp"
#include "PX2LanguageManager.hpp"
#include "PX2GraphicsRoot.hpp"
#include "PX2IMEDispatcher.hpp"
#include "PX2InputManager.hpp"
#include "PX2ResourceManager.hpp"
#include "PX2ScriptManager.hpp"
#include "PX2FontManager.hpp"
#include "PX2AddDeleteManager.hpp"
#include "PX2Selection.hpp"
#include "PX2RedoUndo.hpp"
#include "PX2Creater.hpp"
#include "PX2AccoutManager.hpp"
#include "PX2VBIBObj.hpp"
#include "PX2Project.hpp"
#include "PX2UIAuiManager.hpp"
#include "PX2UISkinManager.hpp"
#include "PX2Edit.hpp"

namespace PX2
{

	class RendererInput;

	class PX2_EXTENDS_ITEM EngineLoop
	{
		PX2_SINGLETION(EngineLoop);

		// pre init
	public:
		void SetPt_Data(void *data);
		void *GetPt_Data();
		void SetPt_Size(const Sizef &size);
		const Sizef &GetPt_Size() const;

	protected:
		void *mPt_Data;
		Sizef mPt_Size;

		// init term
	public:
		bool Initlize();
		bool InitlizeRenderer();

		void WillEnterForeground(bool isFirstTime);
		void DidEnterBackground();

		bool Ternamate();

	private:
		RendererInput *mRendererInput;

		DynLibManager *mDynLibMan;
		PluginManager *mPluginMan;
		TimerManager *mTimerMan;
		EventWorld *mEventWorld;
		LanguageManager *mLanguageMan;
		ScriptManager *mScriptMan;
		GraphicsRoot *mRoot;
		InputManager *mInputMan;
		IMEDispatcher *mIMEDisp;
		ResourceManager *mResMan;
		FontManager *mFontMan;
		AddDeleteManager *mADMan;
		Selection *mSelection;
		Creater *mCreater;
		URDoManager *mURDoMan;
		AccoutManager *mAccoutManager;
		VBIBManager *mVBIBManager;
		Edit *mEdit;
		UIAuiManager *mUIAuiManager;
		UISkinManager *mUISkinManager;

	protected:
		bool mIsInBackground;

		bool mBeforeInBackgroundMusicEnable;
		bool mBeforeInBackgroundSoundEnable;

		// boost
	public:
		enum PlayLogicMode
		{
			PLM_SIMPLE,
			PLM_LOGIC,
			PLM_MAX_MODE
		};

		bool LoadBoost(const std::string &filename);
		const Sizef &GetBoostSize() const;
		const std::string &GetProjectName() const;
		PlayLogicMode GetPlayLogicMode() const;
		std::string GetPlayLogicModeStr() const;

		void SetBoostSize(const Sizef &size);
		void SetPlayLogicMode(PlayLogicMode mode);
		bool WriteBoost();

	protected:
		PlayLogicMode _StrToPlayLogicMode(const std::string &str);

		Sizef mBoostSize;
		std::string mProjectName;
		PlayLogicMode mPlayLogicMode;

		// screen adjust
	public:
		void SetScreenSize(const Sizef &screenSize);
		const Sizef &GetScreenSize() const;
		
		const Rectf &GetAdjustViewPort() const;

		Rectf GetViewPortAdjustFromProject(const Rectf &viewPort);
		Rectf GetViewPortAdjustFromProject(float left, float bottom,
			float width, float height);

	protected:
		bool mIsDoAdjustScreenViewRect;
		Sizef mScreenSize;

		// Tick
	public:
		void Tick();
		float GetElapsedTime();

	private:
		double mAppTime;
		double mLastAppTime;
		double mElapsedTime;

		// Play
	public:
		enum PlayType
		{
			PT_NONE,
			PT_SIMULATE,
			PT_PLAY,
			PT_MAX_TYPE
		};
		void Play(PlayType type);
		PlayType GetPlayType() const;

		bool IsDoAdjustScreenViewRect() const;
		
	protected:
		void _SetDoAdjustScreenViewRect(bool adjust);

		PlayType mPlayType;
		Rectf mAdjustViewPort;

		// Project Keep
	public_internal:
		Pointer0<Project> msProject;

		// Event
	public:
		void FireEventGeneralString(const std::string &str, float timeDelay=0.0f);
	};

#include "PX2EngineLoop.inl"
#define PX2_ENGINELOOP EngineLoop::GetSingleton()

}

#endif