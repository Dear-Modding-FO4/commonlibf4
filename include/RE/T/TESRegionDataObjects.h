#pragma once

#include "RE/T/TESRegionData.h"

namespace RE
{
	class __declspec(novtable) TESRegionDataObjects : public TESRegionData
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataObjects };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataObjects };
	};
}
