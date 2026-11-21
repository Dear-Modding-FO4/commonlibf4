#pragma once

#include "RE/H/hkBaseObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpSolverData :
		public hkBaseObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSolverData };
		inline static constexpr auto VTABLE{ VTABLE::hknpSolverData };

		// add
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]
		virtual void addImmediateContactConstraintUsingJacobian();  // 0x20 [04] (hknpContactJacobian_)
		virtual void Unk_05();  // 0x28 [05]

		// members
		std::uint8_t unk08[0x8];    // 0x08
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint8_t unk20[0x120];  // 0x20
		hkArray<std::uint8_t> unk140;  // 0x140
		void* unk150;               // 0x150
		std::uint8_t unk158[0x8];   // 0x158
	};
	static_assert(sizeof(hknpSolverData) == 0x160);
	static_assert(offsetof(hknpSolverData, unk150) == 0x150);
	static_assert(offsetof(hknpSolverData, unk10) == 0x10);
	static_assert(offsetof(hknpSolverData, unk20) == 0x20);
	static_assert(offsetof(hknpSolverData, unk140) == 0x140);
}
