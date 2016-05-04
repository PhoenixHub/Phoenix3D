// PX2AmbientRegionActor.hpp

#ifndef PX2AMBIENTREGIONACTOR_HPP
#define PX2AMBIENTREGIONACTOR_HPP

#include "PX2Light.hpp"
#include "PX2LightNode.hpp"
#include "PX2Camera.hpp"
#include "PX2CameraNode.hpp"
#include "PX2Float2.hpp"
#include "PX2TriggerActor.hpp"

namespace PX2
{

	class PX2_EXTENDS_ITEM AmbientRegionActor : public TriggerActor
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(AmbientRegionActor);

	public:
		AmbientRegionActor();
		virtual ~AmbientRegionActor();

	protected:
		virtual void UpdateWorldData(double applicationTime, double elapsedTime);

		// Default Dir Light
	public:
		void SetLightCameraLookPostion(const APoint &pos);
		void SetLightCameraLookDistance(float dist);
		void SetLightCameraExtent(float extent);

		void SetHorAngle(float angle);
		float GetHorAngle() const;
		void SetVerAngle(float angle);
		float GetVerAngle() const;

		void SetAmbientColor(const Float3 &color);
		const Float3 &GetAmbientColor() const;

		void SetDiffuseColor(const Float3 &color);
		const Float3 &GetDiffuseColor() const;

		void SetSpecularColor(const Float3 &color);
		const Float3 &GetSpecularColor() const;
		void SetSpecularPow(float pow);
		float GetSpecularPow() const;

		void SetIntensity(float intensity);
		float GetIntensity() const;

		void SetFogColorHeight(const Float3 &color);
		const Float3 &GetFogColorHeight() const;
		void SetFogParamHeight(const Float2 &param);
		const Float2 &GetFogParamHeight() const;

		void SetFogColorDistance(const Float3 &dist);
		const Float3 &GetFogColorDistance() const;
		void SetFogParamDistance(const Float2 &param);
		const Float2 &GetFogParamDistance() const;

	public_internal:
		virtual void OnBeAttached();
		virtual void OnBeDetach();

	protected:
		void _UpdateDirLightCamera();
		void _UpdateFog();

		float mHorAngle;
		float mVerAngle;

		Float3 mAmbientColor;
		Float3 mDiffuseColor;
		Float3 mSpecularColor;
		float mSpecularPow;
		float mIntensity;

		APoint mLightCameraLookPosition;
		float mLightCameraLookDistance;
		float mLightCameraExtent;

		Float3 mFogColorHeight;
		Float2 mFogParamHeight;
		Float3 mFogColorDist;
		Float2 mFogParamDist;

		// Bake
	public:
	protected:
	};

#include "PX2AmbientRegionActor.inl"
	PX2_REGISTER_STREAM(AmbientRegionActor);
	typedef PointerRef<AmbientRegionActor> AmbientRegionActorPtr;

}

#endif