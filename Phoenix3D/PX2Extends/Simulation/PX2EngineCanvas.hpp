// PX2EngineCanvas.hpp

#ifndef PX2ENGINECANVAS_HPP
#define PX2ENGINECANVAS_HPP

#include "PX2SimulationPre.hpp"
#include "PX2UICanvas.hpp"

namespace PX2
{

	// EngineCanvas��һ����������SceneCanvas��UICanvas����
	// Ĭ������ᴴ�����������˳�������UIʱ��������SceneCanvas��
	// UICanvas��ȥ
	// �ڱ༭���У�����ڶ������AppPlayer��ֻ��Ҫһ������
	class PX2_EXTENDS_ITEM EngineCanvas : public UICanvas
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_STREAM(EngineCanvas);

	public:
		EngineCanvas();
		virtual ~EngineCanvas();

		enum CanvasAddMode
		{
			CAM_ATTACHCHILD,
			CAM_SET_RENDERMOVABLE,
			CAM_MAX_TYPE
		};
		void SetCanvasAddMode(CanvasAddMode mode);
		CanvasAddMode GetCanvasAddMode() const;

		enum CanvasAddType
		{
			CAT_SCENE,
			CAT_UI,
			CAT_SCENEUI,
			CAT_MAX_TYPE
		};
		void SetCanvasAddType(CanvasAddType cat);
		CanvasAddType GetCanvasAddType() const;

		void SetSimu(bool simu);
		bool IsSimu() const;

		virtual void DoExecute(Event *event);

	protected:
		CanvasPtr mSceneCanvas;
		CanvasPtr mUICanvas;
		CanvasAddMode mCanvasAddMode;
		CanvasAddType mCanvasAddType;
		bool mIsSimu;

	public:
		virtual void OnLeftDown(const APoint &worldPos);
		virtual void OnLeftUp(const APoint &worldPos);
		virtual void OnLeftDClick(const APoint &worldPos);
		virtual void OnMiddleDown(const APoint &worldPos);
		virtual void OnMiddleUp(const APoint &worldPos);
		virtual void OnMouseWheel(const APoint &worldPos, float delta);
		virtual void OnRightDown(const APoint &worldPos);
		virtual void OnRightUp(const APoint &worldPos);
		virtual void OnMotion(const APoint &worldPos);
	};

	PX2_REGISTER_STREAM(EngineCanvas);
	typedef PointerRef<EngineCanvas> EngineCanvasPtr;

}

#endif