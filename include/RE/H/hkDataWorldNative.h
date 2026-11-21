#pragma once

#include "RE/H/hkDataWorld.h"

namespace RE
{
	class __declspec(novtable) hkDataWorldNative :
		public hkDataWorld  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataWorldNative };
		inline static constexpr auto VTABLE{ VTABLE::hkDataWorldNative };
	};
	static_assert(sizeof(hkDataWorldNative) == 0x10);
}
