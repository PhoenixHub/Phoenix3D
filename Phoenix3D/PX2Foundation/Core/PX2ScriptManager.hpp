// PX2ScriptManager.hpp

#ifndef PX2SCRIPTMANAGER_HPP
#define PX2SCRIPTMANAGER_HPP

#include "PX2CorePre.hpp"
#include "PX2Singleton_NeedNew.hpp"

namespace PX2
{

	class PX2_FOUNDATION_ITEM ScriptManager : public Singleton <ScriptManager>
	{
	public:
		ScriptManager();
		virtual ~ScriptManager();

		virtual void *GetSystemState() = 0;

		virtual void Clear();

		virtual bool CallString(const char *str) = 0;
		virtual bool CallString(const std::string &str) = 0;
		virtual bool CallFile(const char *filename) = 0;
		virtual bool CallBuffer(const char *buffer, unsigned long size) = 0;
		virtual bool CallObjectFunction(const char *objectName, const char *funName,
			const char *format = "", ...) = 0; // ��������Ҫ��֤obectName��ȫ��Ψһ��
		virtual bool CallObjectFuntionValist(const char *objectName,
			const char *funName, const char *format, va_list valist) = 0;
		virtual void SetUserTypePointer(const char *luaName, const char *className,
			void *ptr) = 0;

		// һ���Զ�����ע��ϵͳ�������Զ�����Ψһ��ID
		bool AddGlobalName(const std::string &objectName, void *object);
		bool RemoveGlobalName(const std::string &objectName);
		bool IsGlobalNameExist(const std::string &objectName);
		int GetNextRegistObjectID();

	protected:
		std::map<std::string, void*> mGlobals;
		int mNextRegistObjectID;
	};

#define PX2_SM ScriptManager::GetSingleton()

}

#endif