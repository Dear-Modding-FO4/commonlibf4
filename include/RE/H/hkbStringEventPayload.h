#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbStringEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStringEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbStringEventPayload };

		// members
		hkStringPtr m_data;  // 0x10
	};
	static_assert(sizeof(hkbStringEventPayload) == 0x18);
	static_assert(offsetof(hkbStringEventPayload, m_data) == 0x10);
}
