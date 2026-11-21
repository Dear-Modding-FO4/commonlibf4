#pragma once

#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbRealEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRealEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbRealEventPayload };

		// members
		float m_data;  // 0x10
	};
	static_assert(sizeof(hkbRealEventPayload) == 0x18);
	static_assert(offsetof(hkbRealEventPayload, m_data) == 0x10);
}
