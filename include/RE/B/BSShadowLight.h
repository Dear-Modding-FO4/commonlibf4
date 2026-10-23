#pragma once

#include "RE/B/BSLight.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiFrustumPlanes.h"

namespace RE
{
	class BSCullingProcess;
	class BSShaderAccumulator;
	class NiCamera;

	class __declspec(novtable) BSShadowLight : public BSLight
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShadowLight };
		static constexpr auto VTABLE{ VTABLE::BSShadowLight };

		static constexpr std::size_t RENDER_SLOT = 0x0A;
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
			std::byte            unkE8;                // E8
			bool                 isFirstMap;           // E9
			bool                 isLastMap;            // EA
			std::byte            unkEB[0x5];           // EB
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
		static_assert(offsetof(ShadowMapData, isFirstMap) == 0xE9);
		static_assert(offsetof(ShadowMapData, isLastMap) == 0xEA);

		// members
		std::uint32_t                   shadowMapCount;         // 190
		std::byte                       unk194[0x4];            // 194
		ShadowMapData*                  shadowMapData;          // 198
		std::uint32_t                   shadowMapDataCapacity;  // 1A0
		std::byte                       unk1A4[0x4];            // 1A4
		std::uint32_t                   shadowMapDataSize;      // 1A8
		std::byte                       unk1AC[0xC];            // 1AC
		BSTArray<NiPointer<NiAVObject>> shadowCasters;          // 1B8
		float                           shadowDepthBias;        // 1D0
		std::byte                       unk1D4[0x8];            // 1D4
		bool                            godrayEmitter;          // 1DC
		std::byte                       unk1DD[0x3];            // 1DD
		float                           godrayIntensity;        // 1E0
		float                           godrayNearClip;         // 1E4
		std::uint32_t                   godrayGridResolution;   // 1E8
		std::byte                       unk1EC[0x14];           // 1EC
	};
	static_assert(sizeof(BSShadowLight) == 0x200);
	static_assert(offsetof(BSShadowLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowLight, shadowMapDataCapacity) == 0x1A0);
	static_assert(offsetof(BSShadowLight, shadowMapDataSize) == 0x1A8);
	static_assert(offsetof(BSShadowLight, shadowCasters) == 0x1B8);
	static_assert(offsetof(BSShadowLight, shadowDepthBias) == 0x1D0);
	static_assert(offsetof(BSShadowLight, godrayEmitter) == 0x1DC);
	static_assert(offsetof(BSShadowLight, godrayIntensity) == 0x1E0);
	static_assert(offsetof(BSShadowLight, godrayNearClip) == 0x1E4);
	static_assert(offsetof(BSShadowLight, godrayGridResolution) == 0x1E8);
}
