#pragma once

#include "RE/B/bhkCharacterControllerCinfo.h"

namespace RE
{
	class __declspec(novtable) bhkCharRigidBodyControllerCinfo :
		public bhkCharacterControllerCinfo  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharRigidBodyControllerCinfo };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharRigidBodyControllerCinfo };

		// members
		std::uint8_t unkA0[0xA0];  // 0xA0
	};
	static_assert(sizeof(bhkCharRigidBodyControllerCinfo) == 0x140);
}
