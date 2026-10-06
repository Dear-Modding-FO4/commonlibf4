#pragma once

#include "RE/B/BSShadowLight.h"

namespace RE
{
	// BSLight base is unmapped; only proven fields are declared.
	class __declspec(novtable) BSShadowDirectionalLight
	{
	public:
		using ShadowMapData = BSShadowLight::ShadowMapData;

		// members
		std::byte      field_0x00[0x190];  // 000 - BSLight and BSShadowLight base
		std::uint32_t  shadowMapCount;     // 190
		std::byte      field_0x194[0x4];   // 194
		ShadowMapData* shadowMapData;      // 198 - shadowMapCount entries
		std::byte      field_0x1A0[0xB0];  // 1A0
		float          splitDistances[4];  // 250
	};
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowDirectionalLight, splitDistances) == 0x250);
}
