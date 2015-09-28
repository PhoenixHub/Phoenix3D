// PX2EditRenderView_Logic.hpp

#ifndef PX2EDITUIRENDERVIEW_LOGIC_HPP
#define PX2EDITUIRENDERVIEW_LOGIC_HPP

#include "PX2EditPre.hpp"
#include "PX2EditRenderView.hpp"

namespace PX2
{

	class PX2_EXTENDS_ITEM EditRenderView_Logic : public EditRenderView
	{
	public:
		EditRenderView_Logic();
		virtual ~EditRenderView_Logic();
	};

	typedef Pointer0<EditRenderView_Logic> EditRenderView_LogicPtr;

}

#endif