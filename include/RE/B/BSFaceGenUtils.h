#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	namespace BSTextureArray
	{
		class StaticTextureIndexed;
	}

	namespace BSFaceGenUtils
	{
		class FaceGenData :
			public BSIntrusiveRefCounted
		{
		public:
			NiPointer<BSTextureArray::StaticTextureIndexed> textures[4];                     // 008
			std::byte                                       hairLookupTexture[0x30 - 0x28];  // 028 - BSResource::RHandleType
			std::uint32_t                                   layerCount;                      // 030
			std::uint32_t                                   lru[128];                        // 034
			std::uint32_t                                   stamp;                           // 234
		};
		static_assert(sizeof(FaceGenData) == 0x238);
	}
}
