#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class hkbEventPayload;

	class __declspec(novtable) hkbEventPayloadList :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventPayloadList };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventPayloadList };

		// members
		hkArray<hkbEventPayload*> m_payloads;  // 0x10
	};
	static_assert(sizeof(hkbEventPayloadList) == 0x20);
	static_assert(offsetof(hkbEventPayloadList, m_payloads) == 0x10);
}
