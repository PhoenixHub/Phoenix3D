// PX2GraphicsRoot.hpp

#ifndef PX2GRAPHICSROOT_HPP
#define PX2GRAPHICSROOT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Size.hpp"
#include "PX2Camera.hpp"
#include "PX2Light.hpp"
#include "PX2Singleton_NeedNew.hpp"
#include "PX2Rect.hpp"
#include "PX2EnvirParam.hpp"
#include "PX2VertexFormat.hpp"
#include "PX2Canvas.hpp"
#include "PX2FString.hpp"
#include "PX2Projector.hpp"
#include "PX2TriMesh.hpp"
#include "PX2RenderWindow.hpp"

namespace PX2
{

	typedef Object *(*ObjectLoadFun) (const char *filename);
	typedef bool (*BufferLoadFun)(const char *filename, int &bufferSize,
		char* &buffer);

	class Renderer;
	class VisibleSet;

	class PX2_FOUNDATION_ITEM GraphicsRoot : public Singleton<GraphicsRoot>
	{
	public:
		GraphicsRoot ();
		virtual ~GraphicsRoot ();

		bool Initlize ();
		bool Terminate ();

		void Update(double appSeconds, double elapsedSeconds);
		void Draw();
		
		void SetInEditor (bool isInEditor);
		bool IsInEditor () const;

		const static std::string sEmptyResPath;
		const static std::string sTerResPath;

	private:
		bool mIsInEditor;

		// Environment
	public:
		// �����������������浱ǰҪ��Ⱦ��3D��������յ��Ĺ��գ������Ϣ��
		// ÿһ��Scene�ж�����һ�������������ڼ���Scene��ʱ�����ø�Scene�Ļ���
		// ��������ǰ��
		// ��һ���������Ҫͬʱ��Ⱦ���������������ڱ༭���У����������ͣ�
		// PreView������������Ҫ�����в�ͬ�����о�����Ҫ�ڼ��غ���Ⱦ�������֮
		// ǰ����һ�µ�ǰ��������������Ⱦ���֮�����û�ԭ���Ĳ�����
		void SetCurEnvirParam(EnvirParam *param);
		EnvirParam *GetCurEnvirParam();

	protected:
		EnvirParamPtr mCurEnvirParam;

		//window
	public:
		bool AddRenderWindow(const std::string &name, RenderWindow *rw);
		bool IsHasRenderWindow(const std::string &name);
		bool RemoveRenderWindow(const std::string &name);
		RenderWindow *GetRenderWindow(const std::string &name);
		RenderWindow *GetMainWindow();

	protected:
		std::map<std::string, RenderWindowPtr> mRenderWindows;
		RenderWindowPtr mMainRenderWindow;

		// Play
	public:
		enum PlayType
		{
			PT_NONE,
			PT_SIMULATE,
			PT_PLAY,
			PT_MAX_TYPE
		};
		void SetPlayType(PlayType type);
		PlayType GetPlayType() const;

	protected:
		PlayType mPlayType;

		// VertexFormat
	public:
		enum VertexFormatType
		{
			VFT_PT1,
			VFT_PT2,
			VFT_PC,
			VFT_PCT1,
			VFT_PCT2,
			VFT_PNT1,
			VFT_PCNT1,
			VFT_MAX_TYPE
		};

		VertexFormat *GetVertexFormat(VertexFormatType type);

	protected:
		std::map<VertexFormatType, VertexFormatPtr > mCreatedVFs;

		// HelpMesh
	public:
		TriMesh *GetXYPlane();
		TriMesh *GetXZPlane();
		TriMesh *GetYZPlane();

	protected:
		PointerRef<TriMesh> mTriMeshXY;
		PointerRef<TriMesh> mTriMeshXZ;
		PointerRef<TriMesh> mTriMeshYZ;

		// Load
	public:
		static void SetUserLoadFun(ObjectLoadFun userLoadFun);
		static ObjectLoadFun msUserLoadFun;

		static void SetBufferLoadFun(BufferLoadFun bufferLoadFun);
		static BufferLoadFun msBufferLoadFun;

	public:
		const std::string *GetShaderStr(const char *filename);
	
	protected:
		std::map<FString, std::string> mShadersMap;
	};

#include "PX2GraphicsRoot.inl"

#define PX2_GR GraphicsRoot::GetSingleton()

}

#endif