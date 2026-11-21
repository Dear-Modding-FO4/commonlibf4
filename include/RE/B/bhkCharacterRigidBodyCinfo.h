#pragma once

#include "RE/H/hknpCharacterRigidBodyCinfo.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterRigidBodyCinfo :
		public hknpCharacterRigidBodyCinfo  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterRigidBodyCinfo };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterRigidBodyCinfo };
	};
	static_assert(sizeof(bhkCharacterRigidBodyCinfo) == 0xA0);
}
