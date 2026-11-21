#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbEventPayload :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventPayload };
	};
	static_assert(sizeof(hkbEventPayload) == 0x10);
}
