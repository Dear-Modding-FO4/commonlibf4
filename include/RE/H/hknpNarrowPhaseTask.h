#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpNarrowPhaseTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpNarrowPhaseTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpNarrowPhaseTask };

		// members
		std::uint8_t unk10[0x48];  // 0x10
		void* unk58;               // 0x58
		void* unk60;               // 0x60
		void* unk68;               // 0x68
		void* unk70;               // 0x70
		std::uint8_t unk78[0x38];  // 0x78
		void* unkB0;               // 0xB0
		std::uint8_t unkB8[0x8];   // 0xB8
		std::uint32_t unkC0;       // 0xC0
		std::uint8_t padC4[0x4];   // 0xC4
		void* unkC8;               // 0xC8
		std::uint32_t unkD0;       // 0xD0
		std::uint32_t unkD4;       // 0xD4
		void* unkD8;               // 0xD8
		std::uint32_t unkE0;       // 0xE0
		std::uint32_t unkE4;       // 0xE4
		std::uint8_t unkE8[0x10];  // 0xE8
		void* unkF8;               // 0xF8
		std::uint32_t unk100;      // 0x100
		std::uint32_t unk104;      // 0x104
		void* unk108;              // 0x108
		void* unk110;              // 0x110
		void* unk118;              // 0x118
		std::uint8_t unk120;       // 0x120
		std::uint8_t unk121[0x1];  // 0x121
		std::uint8_t unk122;       // 0x122
		std::uint8_t pad123[0x5];  // 0x123
		void* unk128;              // 0x128
		void* unk130;              // 0x130
		void* unk138;              // 0x138
		void* unk140;              // 0x140
		void* unk148;              // 0x148
		void* unk150;              // 0x150
		std::uint8_t unk158[0x8];  // 0x158
	};
	static_assert(sizeof(hknpNarrowPhaseTask) == 0x160);
	static_assert(offsetof(hknpNarrowPhaseTask, unk58) == 0x58);
	static_assert(offsetof(hknpNarrowPhaseTask, unk60) == 0x60);
	static_assert(offsetof(hknpNarrowPhaseTask, unk68) == 0x68);
	static_assert(offsetof(hknpNarrowPhaseTask, unk70) == 0x70);
	static_assert(offsetof(hknpNarrowPhaseTask, unkB0) == 0xB0);
	static_assert(offsetof(hknpNarrowPhaseTask, unkC0) == 0xC0);
	static_assert(offsetof(hknpNarrowPhaseTask, unkC8) == 0xC8);
	static_assert(offsetof(hknpNarrowPhaseTask, unkD0) == 0xD0);
	static_assert(offsetof(hknpNarrowPhaseTask, unkD4) == 0xD4);
	static_assert(offsetof(hknpNarrowPhaseTask, unkD8) == 0xD8);
	static_assert(offsetof(hknpNarrowPhaseTask, unkE0) == 0xE0);
	static_assert(offsetof(hknpNarrowPhaseTask, unkE4) == 0xE4);
	static_assert(offsetof(hknpNarrowPhaseTask, unkF8) == 0xF8);
	static_assert(offsetof(hknpNarrowPhaseTask, unk100) == 0x100);
	static_assert(offsetof(hknpNarrowPhaseTask, unk104) == 0x104);
	static_assert(offsetof(hknpNarrowPhaseTask, unk108) == 0x108);
	static_assert(offsetof(hknpNarrowPhaseTask, unk110) == 0x110);
	static_assert(offsetof(hknpNarrowPhaseTask, unk118) == 0x118);
	static_assert(offsetof(hknpNarrowPhaseTask, unk120) == 0x120);
	static_assert(offsetof(hknpNarrowPhaseTask, unk122) == 0x122);
	static_assert(offsetof(hknpNarrowPhaseTask, unk128) == 0x128);
	static_assert(offsetof(hknpNarrowPhaseTask, unk130) == 0x130);
	static_assert(offsetof(hknpNarrowPhaseTask, unk138) == 0x138);
	static_assert(offsetof(hknpNarrowPhaseTask, unk140) == 0x140);
	static_assert(offsetof(hknpNarrowPhaseTask, unk148) == 0x148);
	static_assert(offsetof(hknpNarrowPhaseTask, unk150) == 0x150);
}
