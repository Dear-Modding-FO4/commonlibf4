#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpPrepare2ndRoundNarrowPhaseTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPrepare2ndRoundNarrowPhaseTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpPrepare2ndRoundNarrowPhaseTask };

		// members
		void* unk10;               // 0x10
		void* unk18;               // 0x18
		void* unk20;               // 0x20
		void* unk28;               // 0x28
		std::uint8_t unk30[0xC];  // 0x30
		std::uint32_t unk3C;  // 0x3C
		void* unk40;  // 0x40
		std::uint8_t unk48[0x8];  // 0x48
		void* unk50;               // 0x50
		std::uint8_t unk58;        // 0x58
	};
	static_assert(sizeof(hknpPrepare2ndRoundNarrowPhaseTask) == 0x60);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk10) == 0x10);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk18) == 0x18);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk20) == 0x20);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk28) == 0x28);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk50) == 0x50);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk58) == 0x58);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk30) == 0x30);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk3C) == 0x3C);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk40) == 0x40);
	static_assert(offsetof(hknpPrepare2ndRoundNarrowPhaseTask, unk48) == 0x48);
}
