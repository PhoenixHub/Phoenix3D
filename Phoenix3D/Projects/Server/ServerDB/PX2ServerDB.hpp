// PX2ServerDB.hpp

#ifndef PX2SERVERDB_HPP
#define PX2SERVERDB_HPP

#include "PX2NetServer.hpp"

namespace PX2Server
{

	class ServerDB : public PX2::Server
	{
	public:
		ServerDB(PX2::Server::ServerType serverType, int port,
			int numMaxConnects, int numMaxMsgHandlers);
		virtual ~ServerDB();

	protected:
		virtual int OnConnect(unsigned int clientid);
		virtual int OnDisconnect(unsigned int clientid);
		int OnRegAccount(unsigned int clientid, const void *pbuffer, int buflen);
		int OnAuthAccount(unsigned int clientid, const void *pbuffer, int buflen);

	protected:
		bool OnCreateAccout(const std::string &useName, const std::string &password_md5);
	};

}

#endif