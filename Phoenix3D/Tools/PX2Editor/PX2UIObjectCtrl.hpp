// PX2UIObjectCtrl.hpp

#ifndef PX2UIOBJECTCTRL_HPP
#define PX2UIOBJECTCTRL_HPP

#include "PX2EditorPre.hpp"
#include "PX2EventHandler.hpp"
#include "PX2Movable.hpp"
#include "PX2Vector2.hpp"
#include "PX2SwitchNode.hpp"

namespace PX2
{

	class Canvas;

	class PX2_EDITOR_ITEM UIObjectCtrl : public PX2::EventHandler
	{
	public:
		UIObjectCtrl ();
		virtual ~UIObjectCtrl ();

		enum ShapeType
		{
			ST_NONE = 0,
			ST_RECT,
			ST_CROSS,
			ST_MAX_TYPE
		};
		void SetShapeType (ShapeType type);
		ShapeType GetShapeType ();

		// -1Ϊû��drag��0 Ϊdrag����
		// �����¿�ʼ����ʱ��Ϊ1-8
		void SetDragIndex (int index);
		int GetDragIndex ();

		PX2::Movable *GetCtrlsGroup ();

		// PX2 Event
		virtual void OnEvent (PX2::Event *event);

		void OnLeftDown(Canvas *canvas, const PX2::APoint &pos);
		void OnLeftUp(Canvas *canvas, const PX2::APoint &pos);
		void OnMotion(bool leftDown, Canvas *canvas,
			PX2::APoint posNow, PX2::APoint posBefore);

	protected:
		void UpdateOnSelectUI();
		int _GetDragIndex (Canvas *canvas, const PX2::APoint &pos);

		ShapeType mShapeType;

		int mDragIndex;
		PX2::SwitchNodePtr mCtrlsGroup;
		PX2::NodePtr mRectCtrl;
		PX2::NodePtr mCrossCtrl;
		float mSmallRectSize;
	};

	typedef Pointer0<UIObjectCtrl> UIObjectCtrlPtr;

}

#endif