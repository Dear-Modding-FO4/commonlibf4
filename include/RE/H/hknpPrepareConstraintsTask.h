#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpPrepareConstraintsTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPrepareConstraintsTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpPrepareConstraintsTask };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		void* unk20;  // 0x20
		std::uint8_t unk28[0x8];  // 0x28
	};
	static_assert(sizeof(hknpPrepareConstraintsTask) == 0x30);
	static_assert(offsetof(hknpPrepareConstraintsTask, unk10) == 0x10);
	static_assert(offsetof(hknpPrepareConstraintsTask, unk18) == 0x18);
	static_assert(offsetof(hknpPrepareConstraintsTask, unk20) == 0x20);
	static_assert(offsetof(hknpPrepareConstraintsTask, unk28) == 0x28);
}
