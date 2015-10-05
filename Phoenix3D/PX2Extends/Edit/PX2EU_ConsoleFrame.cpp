// PX2EU_Console.cpp

#include "PX2EU_ConsoleFrame.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, UIFrame, EU_ConcoleFrame);
PX2_IMPLEMENT_STREAM(EU_ConcoleFrame);
PX2_IMPLEMENT_FACTORY(EU_ConcoleFrame);

//----------------------------------------------------------------------------
EU_ConcoleFrame::EU_ConcoleFrame()
{
	mList = new0 UIList();
	AttachChild(mList);
	mList->SetAnchorHor(0.0f, 1.0f);
	mList->SetAnchorVer(0.0f, 1.0f);

	mList->AddItem("abcdfdajgdsajgldsajgasdgkjdsag");
	mList->AddItem("abcdfdajgds");
	mList->AddItem("abcdfdajgdsajgldsag");
}
//----------------------------------------------------------------------------
EU_ConcoleFrame::~EU_ConcoleFrame()
{

}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
EU_ConcoleFrame::EU_ConcoleFrame(LoadConstructor value) :
UIFrame(value)
{
}
//----------------------------------------------------------------------------
void EU_ConcoleFrame::Load(InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	UIFrame::Load(source);
	PX2_VERSION_LOAD(source);

	PX2_END_DEBUG_STREAM_LOAD(EU_ConcoleFrame, source);
}
//----------------------------------------------------------------------------
void EU_ConcoleFrame::Link(InStream& source)
{
	UIFrame::Link(source);
}
//----------------------------------------------------------------------------
void EU_ConcoleFrame::PostLink()
{
	UIFrame::PostLink();
}
//----------------------------------------------------------------------------
bool EU_ConcoleFrame::Register(OutStream& target) const
{
	if (UIFrame::Register(target))
	{
		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void EU_ConcoleFrame::Save(OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	UIFrame::Save(target);
	PX2_VERSION_SAVE(target);

	PX2_END_DEBUG_STREAM_SAVE(EU_ConcoleFrame, target);
}
//----------------------------------------------------------------------------
int EU_ConcoleFrame::GetStreamingSize(Stream &stream) const
{
	int size = UIFrame::GetStreamingSize(stream);
	size += PX2_VERSION_SIZE(mVersion);

	return size;
}
//----------------------------------------------------------------------------