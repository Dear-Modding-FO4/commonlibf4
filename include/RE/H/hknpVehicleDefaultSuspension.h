#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpVehicleSuspension.h"

namespace RE
{
	class hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters;

	class __declspec(novtable) hknpVehicleDefaultSuspension :
		public hknpVehicleSuspension  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultSuspension };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultSuspension };

		// members
		std::uint8_t unk10[0x10];                                                                  // 0x10
		hkArray<hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters> m_wheelSpringParams;  // 0x20
	};
	static_assert(sizeof(hknpVehicleDefaultSuspension) == 0x30);
	static_assert(offsetof(hknpVehicleDefaultSuspension, m_wheelSpringParams) == 0x20);
}
