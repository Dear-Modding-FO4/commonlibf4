#pragma once

#include "RE/H/hkbnpCharacterController.h"

namespace RE
{
	class __declspec(novtable) hkbnpCharacterRigidBodyController :
		public hkbnpCharacterController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpCharacterRigidBodyController };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpCharacterRigidBodyController };

		// members
		void* unk50;              // 0x50
		std::uint8_t unk58[0x8];  // 0x58
	};
	static_assert(sizeof(hkbnpCharacterRigidBodyController) == 0x60);
	static_assert(offsetof(hkbnpCharacterRigidBodyController, unk50) == 0x50);
}
