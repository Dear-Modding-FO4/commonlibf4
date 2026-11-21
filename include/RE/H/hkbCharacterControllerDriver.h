#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterControllerDriver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterControllerDriver };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterControllerDriver };

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0x60];  // 0x30
	};
	static_assert(sizeof(hkbCharacterControllerDriver) == 0x90);
	static_assert(offsetof(hkbCharacterControllerDriver, unk10) == 0x10);
	static_assert(offsetof(hkbCharacterControllerDriver, unk20) == 0x20);
	static_assert(offsetof(hkbCharacterControllerDriver, unk30) == 0x30);
}
