#pragma once

#include "RE/H/hknpUnaryAction.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hknpBSMouseSpringAction :
		public hknpUnaryAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSMouseSpringAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSMouseSpringAction };

		// members
		std::uint8_t unk18[0x8];  // 0x18
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0xB0];  // 0x30
	};
	static_assert(sizeof(hknpBSMouseSpringAction) == 0xE0);
	static_assert(offsetof(hknpBSMouseSpringAction, unk18) == 0x18);
	static_assert(offsetof(hknpBSMouseSpringAction, unk20) == 0x20);
	static_assert(offsetof(hknpBSMouseSpringAction, unk30) == 0x30);
}
