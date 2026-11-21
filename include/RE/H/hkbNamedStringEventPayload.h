#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbNamedEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbNamedStringEventPayload :
		public hkbNamedEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNamedStringEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbNamedStringEventPayload };

		// members
		hkStringPtr m_data;  // 0x18
	};
	static_assert(sizeof(hkbNamedStringEventPayload) == 0x20);
	static_assert(offsetof(hkbNamedStringEventPayload, m_data) == 0x18);
}
