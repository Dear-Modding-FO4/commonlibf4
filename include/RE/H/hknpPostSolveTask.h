#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpPostSolveTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPostSolveTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpPostSolveTask };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
	};
	static_assert(sizeof(hknpPostSolveTask) == 0x20);
	static_assert(offsetof(hknpPostSolveTask, unk10) == 0x10);
	static_assert(offsetof(hknpPostSolveTask, unk18) == 0x18);
}
