#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpHBPUpdateTreeTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpHBPUpdateTreeTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpHBPUpdateTreeTask };

		// members
		void* unk10;          // 0x10
		std::uint32_t unk18;  // 0x18
	};
	static_assert(sizeof(hknpHBPUpdateTreeTask) == 0x20);
	static_assert(offsetof(hknpHBPUpdateTreeTask, unk10) == 0x10);
	static_assert(offsetof(hknpHBPUpdateTreeTask, unk18) == 0x18);
}
