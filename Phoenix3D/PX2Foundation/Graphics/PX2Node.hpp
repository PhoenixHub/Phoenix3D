// PX2Node.hpp

#ifndef PX2NODE_HPP
#define PX2NODE_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Movable.hpp"
#include "PX2Culler.hpp"

namespace PX2
{

	typedef void(*TravelExecuteFun) (Movable *mov, Any *data);

	/// �����ڵ���
	/**
	* ����ʵ�֡�����-���ӡ����ƣ�������֯�����Ĺ������Ӹ������������ͬ�����磺
	* BspNode��SwitchNode�ȣ�ʵ�ֲ�ͬ�ĳ�����֯��ʽ��
	*/
	class PX2_FOUNDATION_ITEM Node : public Movable
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(Node);

	public:
		Node ();
		virtual ~Node ();

		virtual void Play ();
		virtual bool IsPlaying () const;
		virtual void Stop ();
		virtual void Reset ();

		/// ��ú�������
		int GetNumChildren () const;
		int GetNumValidChildren () const;

		virtual int AttachChild (Movable* child);
		void InsertChild (Movable *before, Movable *child);
		virtual int DetachChild (Movable* child);
		virtual bool DetachChildByName (const std::string &name);
		virtual MovablePtr DetachChildAt (int i);
		virtual void DetachAllChildren ();
		virtual MovablePtr SetChild (int i, Movable* child);
		virtual MovablePtr GetChild (int i);
		virtual MovablePtr GetChildByName (const std::string &name);
		bool IsHasChild(const Movable *child) const;

		virtual void Enable(bool enable);

		virtual void SetAlpha (float alpha);
		virtual void SetColor (const Float3 &color);
		virtual void SetBrightness (float brightness);
		virtual void SetCastShadow(bool castShadow);
		virtual void SetReceiveShadow(bool reciveShadow);
		
		void SetDoPickPriority (bool doPickPriority); // һ������ΪNode����
		bool IsDoPickPriority () const;
		virtual void OnNotPicked (int pickInfo);

		void SetNeedCalUpdateChild (bool needCal);
		bool IsNeedCalUpdateChild () const;

		void SetAnchorID (int anchorID);
		int GetAnchorID () const;

		virtual void RegistToScriptSystemAll();

		static void TravelExecute(Movable *mov, TravelExecuteFun fun, Any *data=0);

	protected:
		virtual void OnChildAdded(Movable *child);
		virtual void OnChildRemoved(Movable *child);

		// ����ͼ�θ���
		virtual void UpdateWorldData (double applicationTime, double elapsedTime);
		virtual void UpdateWorldBound ();

		// �����̳вü�
		virtual void OnGetVisibleSet (Culler& culler, bool noCull);

		// �����б�
		std::vector<MovablePtr> mChild;

		int mAnchorID;
		
		std::vector<Movable*> mUpdateChild;
		bool mIsNeedCalUpdateChild;

		bool mIsDoPickPriority;
	};

	PX2_REGISTER_STREAM(Node);
	typedef Pointer0<Node> NodePtr;
#include "PX2Node.inl"

}

#endif
