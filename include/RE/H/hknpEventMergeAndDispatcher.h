#pragma once

#include "RE/H/hknpEventDispatcher.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpEventMergeAndDispatcher :
		public hknpEventDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpEventMergeAndDispatcher };
		inline static constexpr auto VTABLE{ VTABLE::hknpEventMergeAndDispatcher };

		// members
		hkArray<std::uint8_t> unk58;  // 0x58
	};
	static_assert(sizeof(hknpEventMergeAndDispatcher) == 0x68);
	static_assert(offsetof(hknpEventMergeAndDispatcher, unk58) == 0x58);
}
