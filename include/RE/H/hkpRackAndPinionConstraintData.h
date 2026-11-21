#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpRackAndPinionConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpRackAndPinionConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpRackAndPinionConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpRackAndPinionConstraintData };

		enum class Type : std::uint32_t
		{
			kTypeRackAndPinion = 0,
			kTypeScrew = 1
		};

		// members
		std::uint8_t unk18[0x8];                      // 0x18
		hkpRackAndPinionConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpRackAndPinionConstraintData) == 0xC0);
	static_assert(offsetof(hkpRackAndPinionConstraintData, m_atoms) == 0x20);
}
