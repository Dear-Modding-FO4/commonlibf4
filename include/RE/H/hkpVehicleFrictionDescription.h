#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleFrictionDescriptionAxisDescription.h"

namespace RE
{
	class __declspec(novtable) hkpVehicleFrictionDescription :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpVehicleFrictionDescription };
		inline static constexpr auto VTABLE{ VTABLE::hkpVehicleFrictionDescription };

		// members
		float m_wheelDistance;                                        // 0x10
		float m_chassisMassInv;                                       // 0x14
		hkpVehicleFrictionDescriptionAxisDescription m_axleDescr[2];  // 0x18
	};
	static_assert(sizeof(hkpVehicleFrictionDescription) == 0xE0);
	static_assert(offsetof(hkpVehicleFrictionDescription, m_wheelDistance) == 0x10);
	static_assert(offsetof(hkpVehicleFrictionDescription, m_chassisMassInv) == 0x14);
	static_assert(offsetof(hkpVehicleFrictionDescription, m_axleDescr) == 0x18);
}
