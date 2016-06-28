// PX2ClientConnect.hpp

#ifndef PX2NETCLIENTCONNECT_HPP
#define PX2NETCLIENTCONNECT_HPP

#include "PX2NetPre.hpp"
#include "PX2NetEventBuffer.hpp"
#include "PX2SmartPointer.hpp"
#include "PX2SocketAddress.hpp"
#include "PX2StreamSocket.hpp"

namespace PX2
{

	enum
	{
		CONNSTATE_INIT = 0,
		CONNSTATE_TRYCONNECT,
		CONNSTATE_CONNECTED,
		CONNSTATE_CONN_ERROR, //���ӳ���״̬�� �ȴ�����
		CONNSTATE_WAITSERVER, //���������������Ϣ�� �ȴ��ظ���Ϣ
	};

	class PX2_ENGINE_ITEM ClientConnector
	{
	public:
		typedef int (ClientConnector::*ServerMsgHandleFunc)(const void *pbuffer, int buflen);

	public:
		ClientConnector(int num_msghandlers);
		virtual ~ClientConnector();

		void RegisterHandler(int msgid, ServerMsgHandleFunc msgfunc, bool need_answer=true, int other_answer_msg=-1);

		StreamSocket &GetSocket ();
		int ConnectB(const std::string &ip, int16_t port);
		int ConnectB(const SocketAddress &addr);
		int ConnectNB(const std::string &ip, int16_t port);
		int ConnectNB(const SocketAddress &addr);
		void Disconnect();
		int GetConnectState ();
		void SetConnectState(int state);

		//�����������ʱ�� ���ô˺�����ͼ���������Ұ�֮ǰûȷ�Ϸ�������Ϣ�����ٷ�
		//������Ҫ����Ϣ�ط�ǰ��Ҫ���͵ĸ�λ��Ϣ�� ���ΪNULL�� �Ͳ��ᷢ��λ��Ϣ
		int Reconnect(BufferEvent *ent = 0);

		template<class T>
		int SendMsgToServer(int msgid, const T &msg);

		int SendMsgToServerBuffer(int msgid, const char *buf, int size);

		int Update(float elapsedSeconds);

	private:
		struct ServerMsgDesc
		{
			ServerMsgHandleFunc handler;
			bool need_answer;
			int other_answermsg;
		};
		std::vector<ServerMsgDesc>mMsgHandlers;

		BufferEventQueue *mSendQue;
		BufferEventQueue *mRecvQue;

		int mConnectState;
		float mConnStateTime; //���ڴ�״̬��ʱ��

		char *mRecvBuf;
		int mRecvLen;
		char *mSendBuf;
		int mSendLen;
		std::string mRawSendStr;

		SocketAddress mAddr;
		StreamSocket mSocket;

	private:
		int _InternalConnectB();
		int _InternalConnectNB();
		void _InternalDisconnect();
		int _HandleServerMsg ();
		int _HandleServerBufferEvent(BufferEvent *pevent);
		int _OnReservedMsg (const void *pbuffer, int buflen);
		int _ClientOnRead();
		int _ClientOnWrite();
	};

#include "PX2NetClientConnector.inl"
	typedef Pointer0<ClientConnector> ClientConnectPtr;

}

#endif