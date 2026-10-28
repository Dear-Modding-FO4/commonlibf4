#pragma once

namespace RE
{
	class Setting;

	namespace NVGodrays
	{
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

		[[nodiscard]] inline bool IsEnabled()
		{
			using func_t = decltype(&IsEnabled);
			static REL::Relocation<func_t> func{ ID::NVGodrays::IsEnabled };
			return func();
		}
	}
}
