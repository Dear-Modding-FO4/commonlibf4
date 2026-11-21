#pragma once

#include "RE/H/hknpShapeTagCodec.h"

namespace RE
{
	class __declspec(novtable) hknpNullShapeTagCodec :
		public hknpShapeTagCodec  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpNullShapeTagCodec };
		inline static constexpr auto VTABLE{ VTABLE::hknpNullShapeTagCodec };

		// members
		std::uint8_t unk10[0x8];  // 0x10
	};
	static_assert(sizeof(hknpNullShapeTagCodec) == 0x18);
}
