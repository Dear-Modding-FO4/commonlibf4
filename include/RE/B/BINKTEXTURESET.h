#pragma once

#include "RE/B/BSTArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSTriShape;

	namespace BSGraphics
	{
		class Texture;
	}

	struct BINKTEXTURESET
	{
	public:
		// members
		std::uint32_t                   bytesPerPixel;    // 00
		std::uint32_t                   width;            // 04
		std::uint32_t                   height;           // 08
		std::uint32_t                   nextTile;         // 0C
		std::uint32_t                   unk10;            // 10
		std::uint32_t                   rowBytes;         // 14
		std::uint32_t                   tileCount;        // 18
		std::uint32_t                   tilesAcross;      // 1C
		std::uint32_t                   tilesDown;        // 20
		std::uint32_t                   edgeTileWidth;    // 24
		std::uint32_t                   edgeTileHeight;   // 28
		std::uint32_t                   remainderWidth;   // 2C
		std::uint32_t                   remainderHeight;  // 30
		std::uint32_t                   tileSize;         // 34
		BSGraphics::Texture**           textures;         // 38
		BSTArray<NiPointer<BSTriShape>> quads;            // 40
		std::uint64_t                   unk58;            // 58
	};
	static_assert(sizeof(BINKTEXTURESET) == 0x60);
}
