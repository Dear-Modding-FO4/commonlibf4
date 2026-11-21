#pragma once

#include "RE/H/hkbNamedEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbNamedIntEventPayload :
		public hkbNamedEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNamedIntEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbNamedIntEventPayload };

		// members
		std::int32_t m_data;  // 0x18
	};
	static_assert(sizeof(hkbNamedIntEventPayload) == 0x20);
	static_assert(offsetof(hkbNamedIntEventPayload, m_data) == 0x18);
}
