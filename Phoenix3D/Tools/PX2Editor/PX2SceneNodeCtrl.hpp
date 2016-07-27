// PX2SceneNodeCtrl.hpp

#ifndef PX2SCENENODECTRLS_HPP
#define PX2SCENENODECTRLS_HPP

#include "PX2EditorPre.hpp"
#include "PX2EventHandler.hpp"
#include "PX2Node.hpp"
#include "PX2SwitchNode.hpp"

namespace PX2
{

	class Renderer;
	class Canvas;

	class PX2_EDITOR_ITEM SceneNodeCtrl : public EventHandler
	{
	public:
		SceneNodeCtrl();
		virtual ~SceneNodeCtrl();

		enum AxisMode
		{
			AM_WORLD,
			AM_LOCAL,
			AM_PARENT,
			AM_MAX_MODE
		};
		void SetAxisMode(AxisMode mode);
		AxisMode GetAxisMode() { return mAxisMode; }

		enum LookType
		{
			LT_TOP,
			LT_FRONT,
			LT_LEFT,
			LT_PERSPECTIVE
		};
		void SetLookType(LookType type);
		LookType GetLookType() { return mLookType; }

		enum CtrlType
		{
			CT_SELECT,
			CT_TRANSLATE,
			CT_ROLATE,
			CT_SCALE
		};
		void SetCtrlType(CtrlType type);
		CtrlType GetCtrlType() { return mCtrlType; }

		enum DragType
		{
			DT_NONE,
			DT_X,
			DT_Y,
			DT_Z,
			DT_XY,
			DT_XZ,
			DT_YZ,
			DT_XYZ
		};
		void SetDragType(DragType type);
		DragType GetDragType() { return mDragType; }

		void OnLeftDown(Camera *camera, const PX2::APoint &pos, const Sizef &size);
		void OnLeftUp(Camera *camera, const PX2::APoint &pos, const Sizef &size);
		void OnMouseWheel(Camera *camera, float wheelDelta, const Sizef &size);
		void OnMotion(bool leftDown, Camera *camera,
			PX2::APoint posNow, PX2::APoint posBefore, const Sizef &size);

		PX2::Node *GetCtrlsGroup() { return mCtrlsGroup; }
		PX2::Movable *GetCurrentCtrlX();
		PX2::Movable *GetCurrentCtrlY();
		PX2::Movable *GetCurrentCtrlZ();
		PX2::Movable *GetCurrentCtrlXYZ();
		PX2::Movable *GetCurrentCtrlXY();
		PX2::Movable *GetCurrentCtrlYZ();
		PX2::Movable *GetCurrentCtrlXZ();

		PX2::APoint GetPosition();
		PX2::AVector GetXDir();
		PX2::AVector GetYDir();
		PX2::AVector GetZDir();

		// PX2 Event
		virtual void OnEvent(Event *event);

		void UpdateCtrlTrans();

	private:
		void UpdateCtrl();
		SceneNodeCtrl::DragType GetDragType(Camera *camera,
			const APoint &viewPortPos, const Sizef &size);

		AxisMode mAxisMode;
		AVector mDirX;
		AVector mDirY;
		AVector mDirZ;
		HMatrix mParentRotateMat;

		LookType mLookType;
		CtrlType mCtrlType;
		PX2::NodePtr mCtrl_P_Translate;
		PX2::NodePtr mCtrl_P_Rolate;
		PX2::NodePtr mCtrl_P_Scale;
		PX2::NodePtr mCtrl_O_Translate;
		PX2::NodePtr mCtrl_O_Rolate;
		PX2::NodePtr mCtrl_O_Scale;
		PX2::NodePtr mCtrl_Bound;
		PX2::SwitchNodePtr mCtrlsGroup;
		float mOriginScale;
		DragType mDragType;
	};
	typedef Pointer0<SceneNodeCtrl> SceneNodeCtrlPtr;

	class BoundCtrl : public EventHandler
	{
	public:
		BoundCtrl();
		virtual ~BoundCtrl();

		PX2::Node *GetCtrlsGroup() { return mCtrlsGroup; }

		virtual void OnEvent(PX2::Event *event);

		void UpdateCtrl();

	protected:
		PX2::SwitchNodePtr mCtrlsGroup;
		PX2::NodePtr mBoundNode;
	};
	typedef Pointer0<BoundCtrl> BoundCtrlPtr;

}

#endif