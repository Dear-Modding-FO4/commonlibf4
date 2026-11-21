#pragma once

#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbIntEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbIntEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbIntEventPayload };

		// members
		std::int32_t m_data;  // 0x10
	};
	static_assert(sizeof(hkbIntEventPayload) == 0x18);
	static_assert(offsetof(hkbIntEventPayload, m_data) == 0x10);
}
