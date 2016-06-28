// PX2UIProgressBar.hpp

#ifndef PX2UIPROGRESSBAR_HPP
#define PX2UIPROGRESSBAR_HPP

#include "PX2UIPre.hpp"
#include "PX2UIFrame.hpp"
#include "PX2UIPicBox.hpp"
#include "PX2Size.hpp"
#include "PX2UIProgressBarCtrl.hpp"

namespace PX2
{

	class PX2_ENGINE_ITEM UIProgressBar : public UIFrame
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(UIProgressBar);

	public:
		UIProgressBar();
		virtual ~UIProgressBar();

		void SetBackPicBox(UIPicBox *picBox);
		void SetProgressPicBox(UIPicBox *picBox);
		void SetOverPicBox(UIPicBox *picBox);
		UIPicBox *GetBackPicBox();
		UIPicBox *GetProgressPicBox();
		UIPicBox *GetOverPicBox();

		void SetPivot(const Float2 &anchorPoint);
		const Float2 &GetPivot() const;

		virtual void OnSizeChanged();
		virtual void OnBorderSizeChanged();

		// 0-1.0f
		void SetProgress(float progress, bool callLogic = true);
		float GetProgress() const;

		void SetProgressAnimInit(float progress);
		void SetProgressAnim(float progress);

		void SetProgressAnimSpeed(float speed);
		float GetProgressAnimSpeed();

		UIProgressBarCtrl *GetProgressBarCtrl();

	protected:
		virtual void UpdateWorldData(double applicationTime, double elapsedTime);
		void _Adjust();

		bool mIsNeedAdujst;

		UIPicBoxPtr mBackPicBox;
		UIPicBoxPtr mProgressPicBox;
		UIPicBoxPtr mOverPicBox;
		Float2 mPivotPoint;
		float mProgress;
		UIProgressBarCtrlPtr mPBCtrl;
	};

	PX2_REGISTER_STREAM(UIProgressBar);
	typedef PointerRef<UIProgressBar> UIProgressBarPtr;

#include "PX2UIProgressBar.inl"

}

#endif