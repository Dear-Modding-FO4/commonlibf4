#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpHBPTreeVsTreeTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpHBPTreeVsTreeTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpHBPTreeVsTreeTask };

		// members
		void* unk10;               // 0x10
		std::uint32_t unk18;       // 0x18
		std::uint8_t unk1C[0x24];  // 0x1C
		void* unk40;               // 0x40
		std::uint32_t unk48;       // 0x48
		std::uint32_t unk4C;       // 0x4C
		std::uint8_t unk50[0xD0];  // 0x50
	};
	static_assert(sizeof(hknpHBPTreeVsTreeTask) == 0x120);
	static_assert(offsetof(hknpHBPTreeVsTreeTask, unk10) == 0x10);
	static_assert(offsetof(hknpHBPTreeVsTreeTask, unk18) == 0x18);
	static_assert(offsetof(hknpHBPTreeVsTreeTask, unk40) == 0x40);
	static_assert(offsetof(hknpHBPTreeVsTreeTask, unk48) == 0x48);
	static_assert(offsetof(hknpHBPTreeVsTreeTask, unk4C) == 0x4C);
}
