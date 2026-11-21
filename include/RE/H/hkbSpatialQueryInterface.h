#pragma once

#include "RE/H/hkaRaycastInterface.h"

namespace RE
{
	class __declspec(novtable) hkbSpatialQueryInterface :
		public hkaRaycastInterface  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSpatialQueryInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbSpatialQueryInterface };
	};
	static_assert(sizeof(hkbSpatialQueryInterface) == 0x8);
}
