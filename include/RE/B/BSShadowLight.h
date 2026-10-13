#pragma once

#include "RE/B/BSLight.h"
#include "RE/N/NiFrustumPlanes.h"

namespace RE
{
	class BSCullingProcess;
	class BSShaderAccumulator;
	class NiCamera;

	// Mapped prefix shared by directional, frustum, and parabolic wrappers.
	class __declspec(novtable) BSShadowLight : public BSLight
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShadowLight };
		static constexpr auto VTABLE{ VTABLE::BSShadowLight };

		static constexpr std::size_t UPDATE_CAMERAS_I_SLOT = 0x0E;

		class ShadowMapData
		{
		public:
			// members
			float                worldToShadow[4][4];  // 00 - cached world-to-shadow UV/depth
			NiCamera*            camera;               // 40 - allocated lazily
			BSShaderAccumulator* accumulator;          // 48
			std::uint32_t        depthStencilTarget;   // 50 - logical depth-stencil index
			std::uint32_t        arraySlice;           // 54
			NiFrustumPlanes      clipPlanes;           // 58
			float                worldUnitsPerTexel;   // C8
			std::int32_t         gridQuantizer;        // CC - sign selects the snap direction
			std::int32_t         viewport[4];          // D0 - left, right, top, bottom
			BSCullingProcess*    cullingProcess;       // E0
			std::byte            field_0xE8[0x8];      // E8
		};
		static_assert(sizeof(ShadowMapData) == 0xF0);
		static_assert(offsetof(ShadowMapData, worldToShadow) == 0x0);
		static_assert(offsetof(ShadowMapData, camera) == 0x40);
		static_assert(offsetof(ShadowMapData, accumulator) == 0x48);
		static_assert(offsetof(ShadowMapData, depthStencilTarget) == 0x50);
		static_assert(offsetof(ShadowMapData, arraySlice) == 0x54);
		static_assert(offsetof(ShadowMapData, clipPlanes) == 0x58);
		static_assert(offsetof(ShadowMapData, worldUnitsPerTexel) == 0xC8);
		static_assert(offsetof(ShadowMapData, gridQuantizer) == 0xCC);
		static_assert(offsetof(ShadowMapData, viewport) == 0xD0);
		static_assert(offsetof(ShadowMapData, cullingProcess) == 0xE0);

		// members
		std::byte      unk188[0x8];      // 188 - unmapped BSLight tail
		std::uint32_t  shadowMapCount;   // 190
		std::byte      unk194[0x4];      // 194
		ShadowMapData* shadowMapData;    // 198
		std::byte      unk1A0[0x30];     // 1A0 - unverified shadow state
		float          shadowDepthBias;  // 1D0
		std::byte      unk1D4[0x2C];     // 1D4 - unverified shadow state
	};
	static_assert(offsetof(BSShadowLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowLight, shadowDepthBias) == 0x1D0);
}
