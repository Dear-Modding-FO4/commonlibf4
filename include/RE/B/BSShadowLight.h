#pragma once

#include "RE/N/NiFrustumPlanes.h"

namespace RE
{
	class BSCullingProcess;
	class BSShaderAccumulator;
	class NiCamera;

	class BSShadowLight
	{
	public:
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
		static_assert(offsetof(ShadowMapData, camera) == 0x40);
		static_assert(offsetof(ShadowMapData, depthStencilTarget) == 0x50);
		static_assert(offsetof(ShadowMapData, clipPlanes) == 0x58);
		static_assert(offsetof(ShadowMapData, worldUnitsPerTexel) == 0xC8);
		static_assert(offsetof(ShadowMapData, viewport) == 0xD0);
		static_assert(offsetof(ShadowMapData, cullingProcess) == 0xE0);
	};
	static_assert(std::is_empty_v<BSShadowLight>);
}
