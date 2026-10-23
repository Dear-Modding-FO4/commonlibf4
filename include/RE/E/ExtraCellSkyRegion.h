#pragma once

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESRegion;

	class __declspec(novtable) ExtraCellSkyRegion :
		public BSExtraData  // 00
	{
		static constexpr auto RTTI{ RTTI::ExtraCellSkyRegion };
		static constexpr auto VTABLE{ VTABLE::ExtraCellSkyRegion };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kSkyRegion };

		// members
		TESRegion* skyRegion;  // 18
	};
	static_assert(sizeof(ExtraCellSkyRegion) == 0x20);
}
