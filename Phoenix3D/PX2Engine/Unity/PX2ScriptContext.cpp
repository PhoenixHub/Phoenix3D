// PX2ScriptContext.cpp

#include "PX2ScriptContext.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
ScriptContext::ScriptContext(ContextType type) :
mType(type)
{
}
//----------------------------------------------------------------------------
ScriptContext::~ScriptContext()
{

}
//----------------------------------------------------------------------------
ScriptContext::ContextType ScriptContext::GetType() const
{
	return mType;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallString(const std::string &str)
{
	PX2_UNUSED(str);

	return false;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallFile(const std::string &filename)
{
	PX2_UNUSED(filename);

	return false;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallBuffer(const char *buffer, unsigned long size, 
	const std::string &name)
{
	PX2_UNUSED(buffer);
	PX2_UNUSED(size);

	return false;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallFileFunction(const std::string &filename,
	const std::string &funName)
{
	return false;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallObjectFunction(const std::string &funName,
	Object *paramObj, const char *format, ...)
{
	va_list argptr;
	va_start(argptr, format);
	bool ret = CallObjectFuntionValist(funName, paramObj, format, argptr);
	va_end(argptr);

	return ret;
}
//----------------------------------------------------------------------------
bool ScriptContext::CallObjectFuntionValist(const std::string &funName,
	Object *paramObj, const std::string &format, va_list valist)
{
	PX2_UNUSED(funName);
	PX2_UNUSED(paramObj);
	PX2_UNUSED(format);
	PX2_UNUSED(valist);

	return false;
}
//----------------------------------------------------------------------------
void ScriptContext::SetUserTypePointer(const std::string &luaName,
	const std::string &className, void *ptr)
{
	PX2_UNUSED(luaName);
	PX2_UNUSED(className);
	PX2_UNUSED(ptr);
}
//----------------------------------------------------------------------------
void ScriptContext::SetUserFunction(const std::string &funName,
	const std::string &returnClassTypeName, ScriptGlobalFun globalFun)
{
	PX2_UNUSED(returnClassTypeName);
	PX2_UNUSED(funName);
	PX2_UNUSED(globalFun);
}
//----------------------------------------------------------------------------
ScriptController *ScriptContext::CreateScriptController(
	const std::string &filename, const std::string &className)
{
	PX2_UNUSED(filename);
	PX2_UNUSED(className);

	return 0;
}
//----------------------------------------------------------------------------
void ScriptContext::RegistOperators()
{
}
//----------------------------------------------------------------------------