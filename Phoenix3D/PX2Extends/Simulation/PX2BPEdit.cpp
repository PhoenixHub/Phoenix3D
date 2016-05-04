// PX2BPEdit.cpp

#include "PX2BPEdit.hpp"
#include "PX2BPManager.hpp"
#include "PX2Creater.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
BPEdit::BPEdit()
{
	mLinkState = LS_NONE;
}
//----------------------------------------------------------------------------
BPEdit::~BPEdit()
{
}
//----------------------------------------------------------------------------
void BPEdit::Reset()
{
	mLinkState = LS_NONE;
	mLinkingParam = 0;
	mLinkedParam = 0;
}
//----------------------------------------------------------------------------
void BPEdit::CompileBPFile(const std::string &filename,
	BPFile *file)
{
	std::ofstream outputFile;
	outputFile.open(filename.c_str());

	std::string script;

	script += "-- lua script generated by Phoenix3D.\n";
	script += "-- Time: " + std::string("2015") + "\n";
	script += "-- File: " + file->GetName() + "\n";
	script += "-- Desc: " + file->GetTip() + "\n";

	std::string compiledScript = PX2_BPM.Compile(file);
	script += compiledScript;

	outputFile << script;

	outputFile.close();
}
//----------------------------------------------------------------------------
void BPEdit::SetLinkingState(BPEdit::LinkingState state)
{
	mLinkState = state;

	if (LS_NONE == mLinkState)
	{
		SetLinkingParam(0);
		SetLinkedParam(0);
	}
	else if (LS_LINKING == mLinkState)
	{
		if (mLinkingParam)
		{
			mLinkingParam->SetLinkingColor(Float3::BLACK);
		}
	}
	else if (LS_LINKING_CANPUT == mLinkState)
	{
		if (mLinkingParam)
		{
			if (mLinkingParam->IsExe())
				mLinkingParam->SetLinkingColor(Float3::GREEN);
			else
				mLinkingParam->SetLinkingColor(Float3::YELLOW);
		}
	}
}
//----------------------------------------------------------------------------
BPEdit::LinkingState BPEdit::GetLinkingState() const
{
	return mLinkState;
}
//----------------------------------------------------------------------------
void BPEdit::SetLinkingWorldPos(const APoint &worldpos)
{
	mLinkingWorldPos = worldpos;

	if (mLinkingParam)
	{
		mLinkingParam->SetLinkingWorldPos(mLinkingWorldPos);
	}
}
//----------------------------------------------------------------------------
const APoint &BPEdit::GetLinkingWorldPos() const
{
	return mLinkingWorldPos;
}
//----------------------------------------------------------------------------
void BPEdit::SetLinkingParam(BPParam *param)
{
	if (mLinkingParam)
	{
		mLinkingParam->DisLinking();
	}

	mLinkingParam = param;
}
//----------------------------------------------------------------------------
BPParam *BPEdit::GetLinkingParam()
{
	return mLinkingParam;
}
//----------------------------------------------------------------------------
void BPEdit::SetLinkedParam(BPParam *linkedParam)
{
	mLinkedParam = linkedParam;

	if (mLinkedParam)
	{
		mLinkingParam->AddLinkToParam(linkedParam);
	}
}
//----------------------------------------------------------------------------
void BPEdit::Disconnect(BPParam *lmParam)
{
	if (lmParam)
	{
		if (lmParam->IsIn())
		{
			for (int i = 0; i < lmParam->GetNumLinkMeParams(); i++)
			{
				BPParam *linkMeParam = lmParam->GetLinkMeParam(i);
				if (linkMeParam)
				{
					linkMeParam->RemoveLinkToParam(lmParam);
				}
			}
		}
		else
		{
			lmParam->RemoveAllLinkToParams();
		}
	}
}
//----------------------------------------------------------------------------
BPParam *BPEdit::GetLinkedParam()
{
	return mLinkedParam;
}
//----------------------------------------------------------------------------