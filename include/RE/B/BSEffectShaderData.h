#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class BSEffectShaderData :
		public BSIntrusiveRefCounted  // 00
	{
	public:
		// members
		std::byte            unk04[0xC];       // 04
		NiPointer<NiTexture> shaderTexture;    // 10
		NiPointer<NiTexture> paletteTexture;   // 18
		NiPointer<NiTexture> blockOutTexture;  // 20
		std::byte            unk28[0x60];      // 28
	};
	static_assert(offsetof(BSEffectShaderData, shaderTexture) == 0x10);
	static_assert(offsetof(BSEffectShaderData, blockOutTexture) == 0x20);
	static_assert(sizeof(BSEffectShaderData) == 0x88);
}
