// PX2TerrainEdit.hpp

#ifndef PX2TERRAINEDIT_HPP
#define PX2TERRAINEDIT_HPP

#include "PX2EditorPre.hpp"
#include "PX2TerrainBrush.hpp"
#include "PX2TerrainProcess.hpp"
#include "PX2LODTerrain.hpp"
#include "PX2EditObjectTerrain.hpp"

namespace PX2
{

	class PX2_EDITOR_ITEM TerrainEdit
	{
	public:
		TerrainEdit();
		~TerrainEdit();

		EditObjectTerrain *GetEditObjectTerrain();

		void EnableEdit();
		void DisableEdit();
		void ShowPageLine(bool show);
		bool IsPageLineShow();

		void UseLodTerrain(bool use);
		bool IsUseLodTerrain();

		void SetEditType(TerrainProcess::TerProType type);
		TerrainProcess::TerProType GetEditType();

		TerrainBrush *GetBrush() { return mBrush; }

		TerrainHeightProcess *GetHeightProcess() { return mHeightProcess; }
		TerrainTextureProcess *GetTextureProcess() { return mTextureProcess; }
		TerrainJunglerProcess *GetJunglerProcess() { return mJunglerProcess; }

		PX2::Renderable *GetTerrainHelpGrid() { return mTerrainHelpGrid; }

		// Do
		void Apply(bool calAverage);

	public_internal:
		void SetTerrain(PX2::RawTerrain *terrain);

	protected:
		PX2::LODTerrain *CreateLODTerrain(PX2::RawTerrain *rawTerrain);
		void CreateTerrainHelpGrid();
		void DestoryTerrainHelpGrid();

		EditObjectTerrainPtr mEditObjectTerrain;

		bool mIsUsingLodTerrain;
		PX2::RawTerrainPtr mTerrain;
		TerrainBrush *mBrush;
		TerrainProcess *mActiveProcess;
		TerrainHeightProcess *mHeightProcess;
		TerrainTextureProcess *mTextureProcess;
		TerrainJunglerProcess *mJunglerProcess;
		PX2::RenderablePtr mTerrainHelpGrid;
	};

}

#endif