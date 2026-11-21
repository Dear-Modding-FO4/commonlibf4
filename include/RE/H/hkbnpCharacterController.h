#pragma once

#include "RE/H/hkbCharacterController.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbnpCharacterController :
		public hkbCharacterController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpCharacterController };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpCharacterController };

		// members
		std::uint8_t unk10[0x20];  // 0x10
		hkVector4f unk30;  // 0x30
		std::uint8_t unk40[0x10];  // 0x40
	};
	static_assert(sizeof(hkbnpCharacterController) == 0x50);
	static_assert(offsetof(hkbnpCharacterController, unk10) == 0x10);
	static_assert(offsetof(hkbnpCharacterController, unk30) == 0x30);
	static_assert(offsetof(hkbnpCharacterController, unk40) == 0x40);
}
