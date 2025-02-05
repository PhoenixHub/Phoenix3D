// PX2RawTerrain.hpp

#ifndef PX2RAWTERRAIN_HPP
#define PX2RAWTERRAIN_HPP

#include "PX2Terrain.hpp"
#include "PX2RawTerrainPage.hpp"

namespace PX2
{
	
	class PX2_ENGINE_ITEM RawTerrain : public Terrain
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(RawTerrain);

	public:
		RawTerrain ();
		virtual ~RawTerrain ();

		// 创建地形时，设置地形属性
		/*
		* 这些接口，在编辑器中创建地形使用
		*/
		void SetRowQuantity (int numRows);
		void SetColQuantity (int numCols);
		void SetSize (int size);
		void SetSpacing (float spacing);
		void AllocateRawTerrainPages ();
		RawTerrainPage *CreatePage (int row, int col);
	};

	PX2_REGISTER_STREAM(RawTerrain);
	typedef PointerRef<RawTerrain> RawTerrainPtr;

}

#endif