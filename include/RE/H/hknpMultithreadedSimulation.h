#pragma once

#include "RE/H/hknpSimulation.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpMultithreadedSimulation :
		public hknpSimulation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMultithreadedSimulation };
		inline static constexpr auto VTABLE{ VTABLE::hknpMultithreadedSimulation };

		// members
		std::uint32_t unk8;         // 0x08
		std::uint8_t unkC[0x11C];  // 0xC
		hkArray<std::uint8_t> unk128;  // 0x128
		std::uint8_t unk138[0x68];  // 0x138
	};
	static_assert(sizeof(hknpMultithreadedSimulation) == 0x1A0);
	static_assert(offsetof(hknpMultithreadedSimulation, unk8) == 0x8);
	static_assert(offsetof(hknpMultithreadedSimulation, unkC) == 0xC);
	static_assert(offsetof(hknpMultithreadedSimulation, unk128) == 0x128);
	static_assert(offsetof(hknpMultithreadedSimulation, unk138) == 0x138);
}
