#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpHingeLimitsDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpHingeLimitsData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpHingeLimitsData };
		inline static constexpr auto VTABLE{ VTABLE::hkpHingeLimitsData };

		// members
		std::uint8_t unk18[0x8];          // 0x18
		hkpHingeLimitsDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpHingeLimitsData) == 0xB0);
	static_assert(offsetof(hkpHingeLimitsData, m_atoms) == 0x20);
}
