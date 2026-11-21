#pragma once

#include "RE/H/hkbNamedEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbNamedRealEventPayload :
		public hkbNamedEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNamedRealEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbNamedRealEventPayload };

		// members
		float m_data;  // 0x18
	};
	static_assert(sizeof(hkbNamedRealEventPayload) == 0x20);
	static_assert(offsetof(hkbNamedRealEventPayload, m_data) == 0x18);
}
