#pragma once

#include "RE/H/hkTask.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpSolverTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSolverTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpSolverTask };

		// members
		std::uint8_t unk10[0x20];  // 0x10
		hkArray<std::uint8_t> unk30;  // 0x30
		std::uint8_t unk40[0x80];  // 0x40
	};
	static_assert(sizeof(hknpSolverTask) == 0xC0);
	static_assert(offsetof(hknpSolverTask, unk10) == 0x10);
	static_assert(offsetof(hknpSolverTask, unk30) == 0x30);
	static_assert(offsetof(hknpSolverTask, unk40) == 0x40);
}
