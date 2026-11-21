#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSimulationStateInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSimulationStateInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbSimulationStateInfo };

		// members
		std::uint8_t m_simulationState;  // 0x10
	};
	static_assert(sizeof(hkbSimulationStateInfo) == 0x18);
	static_assert(offsetof(hkbSimulationStateInfo, m_simulationState) == 0x10);
}
