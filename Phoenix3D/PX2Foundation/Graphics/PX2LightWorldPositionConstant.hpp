// PX2CameraModelPositionConstant.hpp

#ifndef PX2LIGHTWORLDPOSITIONCONSTANT_HPP
#define PX2LIGHTWORLDPOSITIONCONSTANT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2ShaderFloat.hpp"
#include "PX2LightConstant.hpp"

namespace PX2
{

	class PX2_FOUNDATION_ITEM LightWorldPositionConstant : public LightConstant
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(LightWorldPositionConstant);

	public:
		LightWorldPositionConstant (Light* light);
		virtual ~LightWorldPositionConstant ();

		virtual void Update(const ShaderStruct *struc);
	};

	PX2_REGISTER_STREAM(LightWorldPositionConstant);
	typedef PointerRef<LightWorldPositionConstant> LightWorldPositionConstantPtr;

}

#endif
