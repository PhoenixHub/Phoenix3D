// PX2EditDefine.hpp

#ifndef PX2EDITDEFINE_HPP
#define PX2EDITDEFINE_HPP

#include "PX2EditorPre.hpp"

namespace PX2
{

	enum SelectMode
	{
		SM_SINGLE,
		SM_MULTI,
		SM_MAX_TYPE
	};

	enum RenderViewType
	{
		RVT_SCENEUI,
		RVT_LOGIC,
		RVT_RES,
		RVT_PREVIEW,
		RVT_TIMELINE,
		// --------------
		PVT_PROJECT,
		RVT_MAX_TYPE
	};

	static const float TimeLineLeftWidth = 120.0f;

}

#endif