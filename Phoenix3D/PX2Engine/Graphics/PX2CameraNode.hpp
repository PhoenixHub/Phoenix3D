// PX2CameraNode.hpp

#ifndef PX2CAMERANODE_HPP
#define PX2CAMERANODE_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Camera.hpp"
#include "PX2Node.hpp"

namespace PX2
{

	/// ����ڵ���
	/**
	* Node������任������Camera�Ŀռ䷽λ��Node��������ת��������Camera����
	* ���᷽������任�ĵ�0��������ķ���direction����������1�����������
	* ��up����������2����������ң�right��������
	*/
	class PX2_ENGINE_ITEM CameraNode : public Node
	{
	public:
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(CameraNode);

	public:
		/// ���캯��
		/**
		* �ڹ��캯���У�����ĵ�ǰ����ϵͳ����ΪNode�ı��ر任��
		* local translation		  = camera location
		* local rotation column 0 = camera direction
		* local rotation column 1 = camera up
		* local rotation column 2 = camera right
		*/
		CameraNode (Camera* camera = 0);
		virtual ~CameraNode ();

		/// �������
		/**
		* ����ĵ�ǰ����ϵͳ������ΪNode�ı��ر任��Node����任��
		* UpdateWorldData���¼��㣬���������ϵͳ������ΪNode����任��
		*/
		void SetCamera (Camera* camera, bool initFromCamera=true);

		Camera* GetCamera ();
		const Camera* GetCamera () const;

		void EnableUpdate (bool enable);
		bool IsEnableUpdate ();

		void LookAt(const APoint &pos);
		void LookAt(const Movable *mov);

	protected:
		virtual void UpdateWorldData (double applicationTime, double elapsedTime);

		CameraPtr mCamera;
		bool mEnableUpdate;
	};

	PX2_REGISTER_STREAM(CameraNode);
	typedef PointerRef<CameraNode> CameraNodePtr;
#include "PX2CameraNode.inl"


}

#endif
