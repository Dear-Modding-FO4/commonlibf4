#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSimulationControlCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSimulationControlCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSimulationControlCommand };

		enum class SimulationControlCommand : std::uint32_t
		{
			kCommandPlay = 0,
			kCommandPause = 1,
			kCommandStep = 2,
			kCommandStop = 3,
			kCommandAccumulateMotion = 4,
			kCommandDoNotAccumulateMotion = 5
		};

		// members
		std::uint8_t m_command;  // 0x10
	};
	static_assert(sizeof(hkbSimulationControlCommand) == 0x18);
	static_assert(offsetof(hkbSimulationControlCommand, m_command) == 0x10);
}
