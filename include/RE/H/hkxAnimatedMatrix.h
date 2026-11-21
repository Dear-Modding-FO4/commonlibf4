#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxAnimatedMatrix :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxAnimatedMatrix };
		inline static constexpr auto VTABLE{ VTABLE::hkxAnimatedMatrix };

		// members
		hkArray<float> m_matrices;  // 0x10
		std::uint8_t m_hint;        // 0x20
	};
	static_assert(sizeof(hkxAnimatedMatrix) == 0x28);
	static_assert(offsetof(hkxAnimatedMatrix, m_matrices) == 0x10);
	static_assert(offsetof(hkxAnimatedMatrix, m_hint) == 0x20);
}
