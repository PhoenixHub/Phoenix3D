// PX2TargetTransformController.hpp

#ifndef PX2TARGETTRANSFORMCONTROLLER_HPP
#define PX2TARGETTRANSFORMCONTROLLER_HPP

#include "PX2TransformController.hpp"

namespace PX2
{

	class Movable;
	class TargetTransformController;

	typedef void (*TTCArriveAtTargetCallback) (TargetTransformController *ctrl);

	class PX2_FOUNDATION_ITEM TargetTransformController : public TransformController
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(TargetTransformController);

	public:
		TargetTransformController (const Transform &worldTrans);
		virtual ~TargetTransformController ();

		void SetStart (Movable *start);
		Movable *GetStart () const;
		void SetStartPos (const APoint &pos);
		APoint &GetStartPos ();

		void SetTarget (Movable *target);
		Movable *GetTarget () const;
		void SetTargetPos (const APoint &pos); // worldPos
		APoint &GetTargetPos ();

		void SetSpeed (float speed);
		float GetSpeed () const;

		void SetTolerance (float tolerance);
		float GetTolerance () const;

		void SetArriveAtTargetCallback (TTCArriveAtTargetCallback callback);
		TTCArriveAtTargetCallback GetArriveAtTargetCallback ();

		virtual void OnArriveAtTarget ();

		virtual void Reset ();
		virtual void Play ();
		virtual void ResetPlay ();
		bool IsPlaying () const;
		virtual void Stop ();

		virtual bool Update(double applicationTime, double elapsedTime);

	public_internal:
		virtual void SetControlledable(Controlledable* object);

	protected:
		APoint mStartPos;
		APoint mTargetPos;
		Movable *mTarget;
		float mSpeed;
		float mTolerance;
		float mPlayedTime;
		bool mIsPlaying;

		TTCArriveAtTargetCallback mArriveAtTargetCallback;
	};

	PX2_REGISTER_STREAM(TargetTransformController);
	typedef PointerRef<TargetTransformController> TargetTransformControllerPtr;
#include "PX2TargetTransformController.inl"

}

#endif