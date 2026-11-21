#pragma once

#include "RE/H/hknpSpaceSplitter.h"

namespace RE
{
	class __declspec(novtable) hknpSingleCellSpaceSplitter :
		public hknpSpaceSplitter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSingleCellSpaceSplitter };
		inline static constexpr auto VTABLE{ VTABLE::hknpSingleCellSpaceSplitter };
	};
	static_assert(sizeof(hknpSingleCellSpaceSplitter) == 0x28);
}
