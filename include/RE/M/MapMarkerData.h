#pragma once

#include "RE/M/MARKER_TYPE.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class __declspec(novtable) MapMarkerData :
		public TESFullName  // 00
	{
	public:
		enum class Flag : std::uint8_t
		{
			kNone = 0,
			kVisible = 1 << 0,
			kCanTravelTo = 1 << 1,
			kHidden = 1 << 2,
			kUseLocationName = 1 << 3
		};

		const char* GetLocationName()
		{
			using func_t = decltype(&MapMarkerData::GetLocationName);
			static REL::Relocation<func_t> func{ ID::MapMarkerData::GetLocationName };
			return func(this);
		}

		[[nodiscard]] bool IsVisible() const noexcept { return flags.all(Flag::kVisible); }
		[[nodiscard]] bool IsHidden() const noexcept { return flags.all(Flag::kHidden); }
		[[nodiscard]] bool CanTravelTo() const noexcept { return flags.all(Flag::kCanTravelTo); }

		// mirrors the engine's own discovery test in ObjectReference::AddToMap, which is !GetVisible() || GetHidden()
		[[nodiscard]] bool IsDiscovered() const noexcept
		{
			return flags.all(Flag::kVisible) && flags.none(Flag::kHidden);
		}

		// members
		REX::TEnumSet<Flag, std::uint8_t> flags;          // 10
		REX::TEnumSet<Flag, std::uint8_t> originalFlags;  // 11, the FNAM byte as loaded from the plugin, never mutated at runtime
		MARKER_TYPE                       type;           // 12
	};
	static_assert(sizeof(MapMarkerData) == 0x18);
}
