#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxAnimatedFloat :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxAnimatedFloat };
		inline static constexpr auto VTABLE{ VTABLE::hkxAnimatedFloat };

		// members
		hkArray<float> m_floats;  // 0x10
		std::uint8_t m_hint;      // 0x20
	};
	static_assert(sizeof(hkxAnimatedFloat) == 0x28);
	static_assert(offsetof(hkxAnimatedFloat, m_floats) == 0x10);
	static_assert(offsetof(hkxAnimatedFloat, m_hint) == 0x20);
}
