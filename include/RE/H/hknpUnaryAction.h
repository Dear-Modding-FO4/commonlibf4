#pragma once

#include "RE/H/hknpAction.h"

namespace RE
{
	class __declspec(novtable) hknpUnaryAction :
		public hknpAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpUnaryAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpUnaryAction };

		// members
		std::uint8_t unk10[0x8];  // 0x10
	};
	static_assert(sizeof(hknpUnaryAction) == 0x18);
}
