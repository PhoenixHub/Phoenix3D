// PX2UIDefine.hpp

#ifndef PX2UIDEFINE_HPP
#define PX2UIDEFINE_HPP

#include "PX2UIPre.hpp"

namespace PX2
{

	class UIFrame;

	enum UICallType
	{
		UICT_NONE = 0,
		UICT_PRESSED,
		UICT_RELEASED,
		UICT_DOUBLECLICK,
		UICT_PROGRESSCHANGED,
		UICT_EDITBOX_ATTACHWITHIME,
		UICT_EDITBOX_DETACHWITHIME,
		UICT_EDITBOX_TEXTCHANGED,
		UICT_EDITBOX_ENTER,
		UICT_CHECKED,
		UICT_DISCHECKED,
		UICT_MAX_TYPE
	};

	enum UIPickType
	{
		UIPT_NONE = 0,
		UIPT_PRESSED,
		UIPT_RELEASED,
		UIPT_MOVED,
		UIPT_MAX_TYPE
	};

	typedef void(*UICallback) (UIFrame *frame, UICallType type);
	typedef void(*NotPickedCallback) (int info);

	enum UILayoutPosType
	{
		UILPT_LEFT,
		UILPT_RIGHT,
		UILPT_BOTTOM,
		UILPT_TOP,
		UILPT_CENTER,
		UILPT_ALL,
		UILPT_MAX_TYPE
	};

}

#endif