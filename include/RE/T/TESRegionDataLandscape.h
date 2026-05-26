#pragma once

#include "RE/T/TESRegionData.h"

namespace RE
{
	class __declspec(novtable) TESRegionDataLandscape : public TESRegionData
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataLandscape };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataLandscape };
	};
}
