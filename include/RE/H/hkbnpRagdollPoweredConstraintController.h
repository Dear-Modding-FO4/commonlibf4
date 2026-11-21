#pragma once

#include "RE/H/hkbRagdollController.h"

namespace RE
{
	class __declspec(novtable) hkbnpRagdollPoweredConstraintController :
		public hkbRagdollController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpRagdollPoweredConstraintController };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpRagdollPoweredConstraintController };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbnpRagdollPoweredConstraintController) == 0x18);
	static_assert(offsetof(hkbnpRagdollPoweredConstraintController, unk10) == 0x10);
}
