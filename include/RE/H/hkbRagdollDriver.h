#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbRagdollDriver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRagdollDriver };
		inline static constexpr auto VTABLE{ VTABLE::hkbRagdollDriver };

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0x90];  // 0x30
	};
	static_assert(sizeof(hkbRagdollDriver) == 0xC0);
	static_assert(offsetof(hkbRagdollDriver, unk10) == 0x10);
	static_assert(offsetof(hkbRagdollDriver, unk20) == 0x20);
	static_assert(offsetof(hkbRagdollDriver, unk30) == 0x30);
}
