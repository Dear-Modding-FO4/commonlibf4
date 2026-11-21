#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxAnimatedVector :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxAnimatedVector };
		inline static constexpr auto VTABLE{ VTABLE::hkxAnimatedVector };

		// members
		hkArray<float> m_vectors;  // 0x10
		std::uint8_t m_hint;       // 0x20
	};
	static_assert(sizeof(hkxAnimatedVector) == 0x28);
	static_assert(offsetof(hkxAnimatedVector, m_vectors) == 0x10);
	static_assert(offsetof(hkxAnimatedVector, m_hint) == 0x20);
}
