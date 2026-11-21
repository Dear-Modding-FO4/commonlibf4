#pragma once

#include "RE/H/hkbPhysicsInterface.h"

namespace RE
{
	class __declspec(novtable) hkbNullPhysicsInterface :
		public hkbPhysicsInterface  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNullPhysicsInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbNullPhysicsInterface };
	};
	static_assert(sizeof(hkbNullPhysicsInterface) == 0x18);
}
