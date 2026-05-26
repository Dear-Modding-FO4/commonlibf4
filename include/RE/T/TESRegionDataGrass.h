#pragma once

#include "RE/T/TESRegionData.h"

namespace RE
{
	class __declspec(novtable) TESRegionDataGrass : public TESRegionData
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataGrass };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataGrass };
	};
}
