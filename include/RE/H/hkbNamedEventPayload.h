#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbNamedEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNamedEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbNamedEventPayload };

		// members
		hkStringPtr m_name;  // 0x10
	};
	static_assert(sizeof(hkbNamedEventPayload) == 0x18);
	static_assert(offsetof(hkbNamedEventPayload, m_name) == 0x10);
}
