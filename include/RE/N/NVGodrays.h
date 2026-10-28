#pragma once

#include <cstdint>
#include <span>

#include "RE/N/NiPoint3.h"

namespace RE
{
	class Setting;

	namespace NVGodrays
	{
		// One row of the engine quality table; the buffer is render size >> bufferShift.
		struct QualityPreset
		{
			std::uint32_t bufferShift;      // 00
			std::uint32_t sampleCount;      // 04
			float         targetRaySize;    // 08
			std::uint32_t upsampleQuality;  // 0C: 0 point, 1 bilinear, 2 bilateral
		};
		static_assert(sizeof(QualityPreset) == 0x10);

		// Sky::GetGodraysSettings sums the weathers' BGSGodRays slots into this.
		struct MediumSettings
		{
			NiPoint3 airScatter;      // 00
			NiPoint3 forwardScatter;  // 0C
			NiPoint3 backScatter;     // 18
			float    phaseForward;    // 24
			float    phaseBackward;   // 28
		};
		static_assert(sizeof(MediumSettings) == 0x2C);

		// Only the leading field is established; the engine reads no more than this here.
		struct PostprocessSettings
		{
			float intensity;  // 00
		};

		// bVolumetricLightingEnable:Display; read once when the library and its depth target are created.
		[[nodiscard]] inline Setting* GetEnableSetting()
		{
			static REL::Relocation<Setting*> setting{ ID::NVGodrays::EnableSetting };
			return setting.get();
		}

		// iVolumetricLightingQuality:Display; BeginAccumulation clamps it to 0..3 every frame.
		[[nodiscard]] inline Setting* GetQualitySetting()
		{
			static REL::Relocation<Setting*> setting{ ID::NVGodrays::QualitySetting };
			return setting.get();
		}

		// The `gr off` flag; IsEnabled is the enable setting and not this flag.
		[[nodiscard]] inline bool& GetRuntimeDisabled()
		{
			static REL::Relocation<bool*> flag{ ID::NVGodrays::RuntimeDisabled };
			return *flag;
		}

		// Read-only .rdata; BeginAccumulation selects a row each frame.
		[[nodiscard]] inline std::span<QualityPreset, 4> GetQualityPresets()
		{
			static REL::Relocation<QualityPreset*> table{ ID::NVGodrays::QualityPresets };
			return std::span<QualityPreset, 4>{ table.get(), 4 };
		}

		[[nodiscard]] inline bool IsEnabled()
		{
			using func_t = decltype(&IsEnabled);
			static REL::Relocation<func_t> func{ ID::NVGodrays::IsEnabled };
			return func();
		}
	}
}
