#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpBuildConstraintJacobiansTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBuildConstraintJacobiansTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpBuildConstraintJacobiansTask };

		// members
		std::uint32_t unk10;       // 0x10
		std::uint8_t pad14[0x4];   // 0x14
		void* unk18;               // 0x18
		void* unk20;               // 0x20
		void* unk28;               // 0x28
		std::uint32_t unk30;  // 0x30
		std::uint8_t pad34[0x4];  // 0x34
		void* unk38;  // 0x38
	};
	static_assert(sizeof(hknpBuildConstraintJacobiansTask) == 0x40);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk10) == 0x10);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk18) == 0x18);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk20) == 0x20);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk28) == 0x28);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk30) == 0x30);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, pad34) == 0x34);
	static_assert(offsetof(hknpBuildConstraintJacobiansTask, unk38) == 0x38);
}
