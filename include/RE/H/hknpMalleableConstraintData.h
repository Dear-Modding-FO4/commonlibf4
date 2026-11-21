#pragma once

#include "RE/H/hknpBridgeConstraintAtom.h"
#include "RE/H/hkpWrappedConstraintData.h"

namespace RE
{
	class __declspec(novtable) hknpMalleableConstraintData :
		public hkpWrappedConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMalleableConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hknpMalleableConstraintData };

		// members
		hknpBridgeConstraintAtom m_atom;  // 0x20
		bool m_wantsRuntime;              // 0x38
		std::uint8_t pad39[0x3];          // 0x39
		float m_strength;                 // 0x3C
	};
	static_assert(sizeof(hknpMalleableConstraintData) == 0x40);
	static_assert(offsetof(hknpMalleableConstraintData, m_atom) == 0x20);
	static_assert(offsetof(hknpMalleableConstraintData, m_wantsRuntime) == 0x38);
	static_assert(offsetof(hknpMalleableConstraintData, m_strength) == 0x3C);
}
