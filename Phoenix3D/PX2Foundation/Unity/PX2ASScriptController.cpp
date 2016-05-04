// PX2ASScriptController.cpp

#include "PX2ASScriptController.hpp"
#include "PX2ScriptManager.hpp"
#include "PX2ASContext.hpp"
#include "angelscript.h"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, ScriptController, ASScriptController);
PX2_IMPLEMENT_STREAM(ASScriptController);
PX2_IMPLEMENT_DEFAULT_NAMES(ScriptController, ASScriptController);
PX2_IMPLEMENT_FACTORY(ASScriptController);

//---------------------------------------------------------------------------
ASScriptController::ASScriptController() :
ASIScriptObject(0)
{
}
//---------------------------------------------------------------------------
ASScriptController::~ASScriptController()
{
	if (ASIScriptObject)
		ASIScriptObject->Release();
}
//---------------------------------------------------------------------------
void ASScriptController::Play()
{
	Controller::Play();
}
//---------------------------------------------------------------------------
void ASScriptController::_Update(double applicationTime, double elapsedTime)
{
	if (ASIScriptObject)
	{	
		ASContext *asContext = (ASContext*)PX2_SM.GetContext(
			ScriptContext::CT_ANGELSCRIPT);
		asContext->CallOnUpdate(ASIScriptObject);
	}
}
//---------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
ASScriptController::ASScriptController(LoadConstructor value) :
ScriptController(value),
ASIScriptObject(0)
{
}
//----------------------------------------------------------------------------
void ASScriptController::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	ScriptController::Load(source);
	PX2_VERSION_LOAD(source);

	PX2_END_DEBUG_STREAM_LOAD(ASScriptController, source);
}
//----------------------------------------------------------------------------
void ASScriptController::Link(InStream& source)
{
	ScriptController::Link(source);

	source.ResolveLink(mObject);
}
//----------------------------------------------------------------------------
void ASScriptController::PostLink()
{
	ScriptController::PostLink();
}
//----------------------------------------------------------------------------
bool ASScriptController::Register(OutStream& target) const
{
	if (ScriptController::Register(target))
	{
		target.Register(mObject);
		return true;
	}
	return false;
}
//----------------------------------------------------------------------------
void ASScriptController::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	ScriptController::Save(target);
	PX2_VERSION_SAVE(target);

	PX2_END_DEBUG_STREAM_SAVE(ASScriptController, target);
}
//----------------------------------------------------------------------------
int ASScriptController::GetStreamingSize(Stream &stream) const
{
	int size = ScriptController::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	return size;
}
//----------------------------------------------------------------------------