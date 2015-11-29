// PX2RenderStep.hpp

#ifndef PX2RENDERSTEP_HPP
#define PX2RENDERSTEP_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Object.hpp"
#include "PX2Size.hpp"
#include "PX2Rect.hpp"
#include "PX2Culler.hpp"
#include "PX2Node.hpp"
#include "PX2Vector2.hpp"
#include "PX2RenderTarget.hpp"
#include "PX2WireProperty.hpp"

namespace PX2
{

	class Renderer;

	class PX2_FOUNDATION_ITEM RenderStep : public Object
	{
		PX2_DECLARE_RTTI;

	public:
		RenderStep();
		virtual ~RenderStep();

	public:
		virtual void Update(double appSeconds, double elapsedSeconds);

	protected:
		bool mIsUpdated;

	public:
		void Show(bool show);
		bool IsShow() const;

	protected:
		bool mIsShow;

		// Size
		// �ڱ༭������Ҫ���Ŵ��ڣ���̬��������ȣ�����Size��Ƶ���ı�
		// ��AppPlayer�У����ع���ʱ������һ�κ͹��̴�Сһ�£�����Ƶ���ı�
	public:
		virtual void SetSize(const Sizef &size);
		const Sizef &GetSize() const;

		void SetSizeChangeReAdjustCamera(bool doReAdjust);

	protected:
		Sizef mSize;
		bool mIsSizeChangeReAdjustCamera;

		// ScreenSize
		// ����Ļ�ı䣬rendertarget������Ҫ�ؽ���������ƴ˽ӿڣ����д���
	public:
		virtual void SetScreenSize(const Sizef &size);
		const Sizef &GetScreenSize() const;

	protected:
		Sizef mScreenSize;

		// ViewPort
	public:
		void SetViewPort(const Rectf &viewPort);
		void SetViewPort(float left, float bottom, float width, float height);
		const Rectf &GetViewPort() const;

	protected:
		Rectf mViewPort;

		// Renderer Camera Culler
	public:
		virtual void SetRenderer(Renderer *renderer);
		Renderer *GetRenderer();

		virtual void SetCamera(Camera *camera);
		Camera *GetCamera();

		Culler &GetCuller();

		bool GetPickRay(float screenX, float screenY, APoint& origin, AVector& direction);
		Vector2f PointWorldToViewPort(const APoint &worldPos, bool *isInBack=0);

	protected:
		Renderer *mRenderer;
		CameraPtr mCamera;
		Culler mCuller;

		WirePropertyPtr mOverrideWireProperty;

		// Node
	public:
		virtual void SetNode(Node *node);
		Node *GetNode();

	protected:
		NodePtr mNode;

		// Draw
	public:
		void SetPriority(int priority); // Խ������ǰ
		int GetPriority() const;

		void SetBeforeDrawClear(bool color, bool depth, bool stencil);
		void GetBeforeDrawClear(bool &color, bool &depth, bool &stencil);

		virtual void ComputeVisibleSetAndEnv();
		virtual void Draw();

		void SetAfterDrawClear(bool color, bool depth, bool stencil);
		void GetAfterDrawClear(bool &color, bool &depth, bool &stencil);

	public_internal:
		static bool LessThan(const RenderStep *step0, const RenderStep *step1);

	protected:
		int mPriority;
		bool mBeforeDoClearColor;
		bool mBeforeDoClearDepth;
		bool mBeforeDoClearStencil;
		bool mAfterDoClearColor;
		bool mAfterDoClearDepth;
		bool mAfterDoClearStencil;

	public_internal:
		// �༭���е���
		void _Tick(double appTime, double elapsedTime);

		// Help
	public:
		std::pair<float, float> CalPixelToWorld();
	};

#include "PX2RenderStep.inl"
	typedef Pointer0<RenderStep> RenderStepPtr;

}

#endif