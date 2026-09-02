#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSCullingProcess;
	class BSGeometry;
	class BSShaderAccumulator;
	class NiCamera;

	class __declspec(novtable) Precipitation
	{
	public:
		static constexpr auto RTTI{ RTTI::Precipitation };
		static constexpr auto VTABLE{ VTABLE::Precipitation };

		struct OcclusionMapData
		{
			OcclusionMapData();

			// members
			std::byte                      field_0x0[0x40];  // 00 - unused
			NiPointer<NiCamera>            camera;           // 40
			NiPointer<BSShaderAccumulator> accumulator;      // 48 - render mode 14
			std::byte                      field_0x50[0x8];  // 50 - unused
			BSCullingProcess*              cullingProcess;   // 58 - owning
		};
		static_assert(sizeof(OcclusionMapData) == 0x60);

		virtual ~Precipitation();

		// members
		std::byte             field_0x8[0x8];              // 08 - unused
		OcclusionMapData      occlusionData;               // 10
		BSFixedString         wetnessEnvMap;               // 70
		std::byte             wetnessEnvMapTexture[0x80 - 0x78];  // 78 - BSResource::RHandleType<...NiTexture...>
		NiPointer<BSGeometry> precipParticleGeometry;      // 80
		NiPointer<BSGeometry> prevPrecipParticleGeometry;  // 88
		float                 precipUpdateValue;           // 90 - constructed 4096.0f
		float                 precipFadeScale;             // 94 - constructed 1.0f
		float                 prevPrecipFade;              // 98 - constructed 1.0f
		float                 prevPrecipOcclusion;         // 9C - constructed 0.0f
	};
	static_assert(sizeof(Precipitation) == 0xA0);
}
