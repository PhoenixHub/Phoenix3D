// PX2EngineLoop_Tick.cpp

#include "PX2EngineLoop.hpp"
#include "PX2Project.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
void EngineLoop::Tick()
{
	mAppTime = Time::GetTimeInSeconds();
	mElapsedTime = GetElapsedTime();
	mLastAppTime = mAppTime;

	if (mEventWorld)
		mEventWorld->Update((float)mElapsedTime);

	PX2_RM.Update(mAppTime, mElapsedTime);
	PX2_FM.Update();

	Project *proj = Project::GetSingletonPtr();

	for (int i = 0; i < (int)mTickCallbacks.size(); i++)
	{
		(*mTickCallbacks[i])(mAppTime, mElapsedTime);
	}

	PX2_GR.Update(mAppTime, mElapsedTime);

	if (mIsInBackground) return;

	PX2_GR.ComputeVisibleSetAndEnv();

	Renderer *defaultRenderer = Renderer::GetDefaultRenderer();
	if (defaultRenderer && defaultRenderer->PreDraw())
	{
		// clear screen
		defaultRenderer->SetViewport(Rectf(0.0f, 0.0f, mScreenSize.Width, mScreenSize.Height));
        if (proj) defaultRenderer->SetClearColor(proj->GetBackgroundColor());
		else defaultRenderer->SetClearColor(Float4(30.0f / 255.0f, 30.0f / 255.0f, 30.0f / 255.0f, 1.0f));
		defaultRenderer->ClearBuffers();

		if (mIsDoAdjustScreenViewRect)
			defaultRenderer->SetViewport(mAdjustViewPort);

		if (proj)
		{
			Scene *scene = proj->GetScene();
			if (scene)
			{
				defaultRenderer->SetClearColor(MathHelp::Float3ToFloat4(scene->GetColor(), 1.0f));
			}
			else
			{
				defaultRenderer->SetClearColor(proj->GetProjBackgroundColor());
			}
			defaultRenderer->ClearBuffers();
		}

		PX2_GR.Draw();

		defaultRenderer->PostDraw();
		defaultRenderer->DisplayColorBuffer();
	}
}
//----------------------------------------------------------------------------
void EngineLoop::AddTickCallback(TickCallback callback)
{
	if (IsHasTickCallback(callback))
		return;

	mTickCallbacks.push_back(callback);
}
//----------------------------------------------------------------------------
bool EngineLoop::IsHasTickCallback(TickCallback callback)
{
	for (int i = 0; i < (int)mTickCallbacks.size(); i++)
	{
		if (callback == mTickCallbacks[i])
		{
			return true;
		}
	}

	return false;
}
//----------------------------------------------------------------------------
void EngineLoop::RemoveTickCallback(TickCallback callback)
{
	std::vector<TickCallback>::iterator it = mTickCallbacks.begin();
	for (; it != mTickCallbacks.end(); it++)
	{
		if (*it == callback)
		{
			mTickCallbacks.erase(it);
			return;
		}
	}
}
//----------------------------------------------------------------------------
void EngineLoop::ClearTickCallbacks()
{
	mTickCallbacks.clear();
}
//----------------------------------------------------------------------------