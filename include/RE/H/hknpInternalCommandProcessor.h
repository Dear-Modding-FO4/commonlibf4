#pragma once

#include "RE/H/hkSecondaryCommandDispatcher.h"

namespace RE
{
	class hknpWorld;

	class __declspec(novtable) hknpInternalCommandProcessor :
		public hkSecondaryCommandDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpInternalCommandProcessor };
		inline static constexpr auto VTABLE{ VTABLE::hknpInternalCommandProcessor };

		// members
		hknpWorld* m_world;                         // 0x10
		std::uint8_t m_bodyActivationEvents[0x10];  // 0x18
	};
	static_assert(sizeof(hknpInternalCommandProcessor) == 0x28);
	static_assert(offsetof(hknpInternalCommandProcessor, m_world) == 0x10);
	static_assert(offsetof(hknpInternalCommandProcessor, m_bodyActivationEvents) == 0x18);
}
