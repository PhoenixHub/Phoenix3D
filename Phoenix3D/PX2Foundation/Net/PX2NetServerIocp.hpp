// PX2NetServerIocp.hpp

#ifndef PX2NETSERVERIOCP_HPP
#define PX2NETSERVERIOCP_HPP

#include "PX2NetServerImp.hpp"
#include "PX2NetIocpOverlapBuffer.h"

namespace PX2
{

	enum
	{
		IOCP_READ = 1,
		IOCP_WRITE = 2,
	};

	class PX2_FOUNDATION_ITEM ServerIocp : public ServerImp
	{
	public:
		ServerIocp(int port, int numMaxConnects, int numMaxMsgHandlers,
			BufferEventQueue *peventque);
		virtual ~ServerIocp();

		virtual bool Start();
		virtual void Shutdown();

		virtual void DisconnectClient(unsigned int clientID);
		virtual void DisconnectAll();
		virtual bool PostWrite(unsigned int clientid, char *psrc, int srclen);

		int GetNumUsedOLBuffer();

	protected:
		static DWORD WINAPI _IOWorkerThreadProc(LPVOID pparam);
		static DWORD WINAPI _ListnerThreadProc(LPVOID pparam);

	protected:
		bool _SetupIOWorkers();
		bool _SetupListener();
		unsigned int _DoIOWork();
		unsigned int _DoListen();

		bool _AddClientSocket(px2_socket_t s);
		void _CloseClientSocket(ClientContext *pcontext);
		ClientContext *_GetClientContext(unsigned int clientid);

		void _EnterPendingIO(ClientContext *pcontext);
		void _LeavePendingIO(ClientContext *pcontext);

		bool _PostRead(ClientContext *pcontext, OverlapBuffer *pbuf);
		bool _PostWrite(ClientContext *pcontext, char *psrc, int srclen);
		bool _OnRead(ClientContext *pcontext, OverlapBuffer *pbuf, unsigned int nbytes);
		bool _OnWrite(ClientContext *pcontext, OverlapBuffer *pbuf, unsigned int nbytes);

		px2_socket_t mSktListenSocket;
		WSAEVENT mhEvent;
		HANDLE mhCompletionPort;

		OverlapBufferMgr mOLBufMgr;
	};

#include "PX2NetServerIocp.inl"

}

#endif