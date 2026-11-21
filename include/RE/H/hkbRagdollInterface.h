#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRagdollInterface :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRagdollInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbRagdollInterface };
	};
	static_assert(sizeof(hkbRagdollInterface) == 0x10);
}
