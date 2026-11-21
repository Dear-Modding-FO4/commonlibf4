#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkaFootPlacementIkSolver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaFootPlacementIkSolver };
		inline static constexpr auto VTABLE{ VTABLE::hkaFootPlacementIkSolver };

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0xC0];  // 0x30
	};
	static_assert(sizeof(hkaFootPlacementIkSolver) == 0xF0);
	static_assert(offsetof(hkaFootPlacementIkSolver, unk10) == 0x10);
	static_assert(offsetof(hkaFootPlacementIkSolver, unk20) == 0x20);
	static_assert(offsetof(hkaFootPlacementIkSolver, unk30) == 0x30);
}
