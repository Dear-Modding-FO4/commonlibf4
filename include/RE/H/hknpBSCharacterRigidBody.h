#pragma once

#include "RE/H/hknpCharacterRigidBody.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpBSCharacterRigidBody :
		public hknpCharacterRigidBody  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSCharacterRigidBody };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSCharacterRigidBody };

		// members
		hkArray<std::uint8_t> unk80;  // 0x80
		std::uint8_t unk90[0x30];  // 0x90
	};
	static_assert(sizeof(hknpBSCharacterRigidBody) == 0xC0);
	static_assert(offsetof(hknpBSCharacterRigidBody, unk80) == 0x80);
	static_assert(offsetof(hknpBSCharacterRigidBody, unk90) == 0x90);
}
