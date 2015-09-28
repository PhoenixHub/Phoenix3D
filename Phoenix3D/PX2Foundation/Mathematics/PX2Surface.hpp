// PX2Surface.hpp

#ifndef PX2SURFACE_HPP
#define PX2SURFACE_HPP

#include "PX2MathematicsPre.hpp"

namespace PX2
{

	template <typename Real>
	class PX2_FOUNDATION_ITEM Surface
	{
	public:
		virtual ~Surface ();

	protected:
		Surface ();
	};

	typedef Surface<float> Surfacef;
	typedef Surface<double> Surfaced;

}

#endif