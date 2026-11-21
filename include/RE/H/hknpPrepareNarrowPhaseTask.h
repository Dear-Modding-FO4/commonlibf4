#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpPrepareNarrowPhaseTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPrepareNarrowPhaseTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpPrepareNarrowPhaseTask };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
	};
	static_assert(sizeof(hknpPrepareNarrowPhaseTask) == 0x20);
	static_assert(offsetof(hknpPrepareNarrowPhaseTask, unk10) == 0x10);
	static_assert(offsetof(hknpPrepareNarrowPhaseTask, unk18) == 0x18);
}
