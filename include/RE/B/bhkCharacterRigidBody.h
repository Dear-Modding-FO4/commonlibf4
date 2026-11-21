#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterRigidBody :
		public NiObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterRigidBody };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterRigidBody };

		// members
		std::uint8_t unk10[0x8];  // 0x10
	};
	static_assert(sizeof(bhkCharacterRigidBody) == 0x18);
}
