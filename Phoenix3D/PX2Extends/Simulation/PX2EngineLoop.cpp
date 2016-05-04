// PX2EngineLoop.cpp

#include "PX2EngineLoop.hpp"
#include "PX2Time.hpp"
#include "PX2SimulationEventType.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
EngineLoop::EngineLoop() :
mPt_Data(0),

mDynLibMan(0),
mPluginMan(0),
mTimerMan(0),
mEventWorld(0),
mLanguageMan(0),
mRoot(0),
mIMEDisp(0),
mInputMan(0),
mResMan(0),
mScriptMan(0),
mFontMan(0),
mADMan(0),
mSelectionMan(0),
mCreater(0),
mURDoMan(0),
mBPMan(0),
mBPEdit(0),
mFunObjectManager(0),
mAccoutManager(0),
mVBIBManager(0),
mEdit(0),
mUIAuiManager(0),
mUISkinManager(0),

mIsInBackground(false),

mPlayLogicMode(PLM_SIMPLE),

mAppTime(0),
mLastAppTime(0),
mElapsedTime(0)
{
}
//----------------------------------------------------------------------------
EngineLoop::~EngineLoop()
{
}
//----------------------------------------------------------------------------
void EngineLoop::SetPt_Data(void *data)
{
	mPt_Data = data;
}
//----------------------------------------------------------------------------
void *EngineLoop::GetPt_Data()
{
	return mPt_Data;
}
//----------------------------------------------------------------------------
void EngineLoop::SetPt_Size(const Sizef &size)
{
	mPt_Size = size;
}
//----------------------------------------------------------------------------
const Sizef &EngineLoop::GetPt_Size() const
{
	return mPt_Size;
}
//----------------------------------------------------------------------------
void EngineLoop::FireEventGeneralString(const std::string &str, 
	float timeDelay)
{
	Event *ent = SimuES::CreateEventX(SimuES::GeneralString);
	ent->SetData(str);
	ent->SetTimeDelay(timeDelay);
	PX2_EW.BroadcastingLocalEvent(ent);
}
//----------------------------------------------------------------------------