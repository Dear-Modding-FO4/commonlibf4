#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpSolverSchedulerTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSolverSchedulerTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpSolverSchedulerTask };

		// members
		void* unk10;              // 0x10
		std::uint8_t unk18[0x8];  // 0x18
		std::uint8_t unk20;       // 0x20
		std::uint8_t unk21;       // 0x21
		std::uint8_t unk22[0xE];  // 0x22
	};
	static_assert(sizeof(hknpSolverSchedulerTask) == 0x30);
	static_assert(offsetof(hknpSolverSchedulerTask, unk10) == 0x10);
	static_assert(offsetof(hknpSolverSchedulerTask, unk20) == 0x20);
	static_assert(offsetof(hknpSolverSchedulerTask, unk21) == 0x21);
}
