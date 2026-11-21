#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpPostCollideTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPostCollideTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpPostCollideTask };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
	};
	static_assert(sizeof(hknpPostCollideTask) == 0x20);
	static_assert(offsetof(hknpPostCollideTask, unk10) == 0x10);
	static_assert(offsetof(hknpPostCollideTask, unk18) == 0x18);
}
