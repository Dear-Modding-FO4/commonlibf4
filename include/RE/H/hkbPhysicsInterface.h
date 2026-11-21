#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbPhysicsInterface :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPhysicsInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbPhysicsInterface };

		// members
		std::uint8_t unk10[0x8];  // 0x10
	};
	static_assert(sizeof(hkbPhysicsInterface) == 0x18);
}
