#pragma once

#include "RE/N/NiColor.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Setting;

	namespace BSGraphics
	{
		class StructuredBuffer;
	}

	namespace BSDFTiledLighting
	{
		struct TiledLightRecord
		{
			std::uint32_t flags;         // 00
			NiPoint3      viewPosition;  // 04
			float         radius;        // 10
			NiColor       color;         // 14
			NiPoint3      radialABC;     // 20
			std::byte     reserved[4];   // 2C - native append leaves these bytes alone
		};
		static_assert(sizeof(TiledLightRecord) == 0x30);
		static_assert(offsetof(TiledLightRecord, flags) == 0x00);
		static_assert(offsetof(TiledLightRecord, viewPosition) == 0x04);
		static_assert(offsetof(TiledLightRecord, radius) == 0x10);
		static_assert(offsetof(TiledLightRecord, color) == 0x14);
		static_assert(offsetof(TiledLightRecord, radialABC) == 0x20);
		static_assert(offsetof(TiledLightRecord, reserved) == 0x2C);

		inline constexpr std::size_t MAX_LIGHTS = 625;
		using LightCounts = std::uint32_t[2];
		using LightRecords = TiledLightRecord[2][MAX_LIGHTS];
		using LightBuffers = BSGraphics::StructuredBuffer* [2];

		// References to separate globals, not an engine-owned contiguous object.
		struct TiledLightFrameView
		{
			std::uint32_t& writeSide;
			LightCounts&   counts;
			LightRecords&  records;
			LightBuffers&  buffers;
		};

		[[nodiscard]] inline TiledLightFrameView GetFrameView()
		{
			static REL::Relocation<std::uint32_t*> side{ ID::BSDFTiledLighting::WriteSide };
			static REL::Relocation<LightCounts*>   counts{ ID::BSDFTiledLighting::LightCounts };
			static REL::Relocation<LightRecords*>  records{ ID::BSDFTiledLighting::LightRecords };
			static REL::Relocation<LightBuffers*>  buffers{ ID::BSDFTiledLighting::LightBuffers };
			return { *side, *counts, *records, *buffers };
		}

		// Native append does not enforce the cumulative 625-record capacity.
		inline void AddLight(std::uint32_t a_typeSelector, const NiPoint3& a_viewPosition,
			float a_radius, const NiColor& a_color, const NiPoint3& a_radialABC,
			bool a_zeroRoughness, bool a_suppressRim, bool a_attenuationOnly, bool a_specular)
		{
			using func_t = decltype(&AddLight);
			static REL::Relocation<func_t> func{ ID::BSDFTiledLighting::AddLight };
			func(a_typeSelector, a_viewPosition, a_radius, a_color, a_radialABC,
				a_zeroRoughness, a_suppressRim, a_attenuationOnly, a_specular);
		}

		[[nodiscard]] inline Setting* GetComputeShaderDeferredTiledLightingSetting()
		{
			static REL::Relocation<Setting*> setting{ ID::BSDFTiledLighting::ComputeShaderDeferredTiledLightingSetting };
			return setting.get();
		}

		[[nodiscard]] inline Setting* GetTiledLightingMinLightsSetting()
		{
			static REL::Relocation<Setting*> setting{ ID::BSDFTiledLighting::TiledLightingMinLightsSetting };
			return setting.get();
		}
	}
}
