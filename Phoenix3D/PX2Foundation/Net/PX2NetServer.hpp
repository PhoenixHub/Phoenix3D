// PX2NetServer.hpp

#ifndef PX2SERVER_HPP
#define PX2SERVER_HPP

#include "PX2NetEventBuffer.hpp"
#include "PX2NetServerImp.hpp"

namespace PX2
{

	enum ClientEventResult
	{
		CER_SUCCEED = 0,
		CER_MSGID_OUTRANGE = 1,		// msgid����mMsgHandlers�ķ�Χ��
		CER_HANDLER_NULL = 2,		// ��Ӧ�Ĵ�����Ϊnull
		CER_PROTOBUF_PARSE = 3,		// protobuffer��������
		CER_NO_PLAYER = 4,			// ����clientid�Ҳ�����Ӧ�����ݣ� ������û�е�¼
		CER_WRONG_STATE = 5,		// ��ɫ�ڲ�״̬����
		CER_WRONG_DATA = 6,			// �ͻ����ϴ����ݳ���
		CER_USER_ERROR = 7,			// ��������
	};

	class PX2_FOUNDATION_ITEM Server
	{
	public:
		typedef int (Server::*MsgHandleFunc)(unsigned int clientid,
			const void *pbuffer, int buflen);

	public:
		enum ServerType
		{
			ST_IOCP,
			ST_POLL,
			ST_MAX_TYPE
		};
		Server(ServerType serverType, int port, int numMaxConnects, 
			int numMaxMsgHandlers);
		virtual ~Server();

		ServerType GetServerType() const;

		bool Start();
		void Shutdown();
		void Run();

		const std::vector<int> &GetThreadIDs() const;

		void LogStatus();

		int GetNumConnects();

		// register msg handle
		void RegisterHandler(int msgid, MsgHandleFunc msgfunc);

	protected:
		void HandleClientEvents();
		int HandleClientEvent(BufferEvent *ent);
		void DisconnectClient(unsigned int clientid);

		// Send
	public:
		template<class T>
		int SendMsgToClient(unsigned int clientid, int msgid, T&msg)
		{
			char buffer[4096];
			int nbytes = MsgToRawBuffer(msgid, msg, buffer, sizeof(buffer));
			if (nbytes <= 0)
			{
				printf("SendMsgToClient, nbytes<=0\n");
				return -1;
			}

			if (!mServerImp->PostWrite(clientid, buffer, nbytes))
			{
				printf("SendMsgToClient, PostWrite false\n");
			}
			return 0;
		}

		template<class T>
		int BroadMsgToClients(int msgid, T&msg)
		{
			char buffer[4096];
			int nbytes = MsgToRawBuffer(msgid, msg, buffer, sizeof(buffer));
			if (nbytes <= 0)
			{
				printf("BroadMsgToClient, nbytes<=0\n");
				return -1;
			}

			if (!mServerImp->PostBroadcast(buffer, nbytes))
			{
				printf("BroadMsgToClient, PostWrite false\n");
			}
			return 0;
		}

	protected:
		Server();

		int OnReservedMsg (unsigned int clientid, const void *pbuffer, int buflen);
		virtual int OnConnect(unsigned int clientid) = 0;
		virtual int OnDisconnect(unsigned int clientid) = 0;

	private:
		ServerType mServerType;
		int mPort;
		int mNumMaxConnects;
		int mNumMaxMsgHandlers;
		BufferEventQueue *mBufferEventQue;
		std::vector<MsgHandleFunc> mMsgHandlers;

		ServerImpPtr mServerImp;
	};

	typedef Pointer0<Server> ServerPtr;

}

#endif