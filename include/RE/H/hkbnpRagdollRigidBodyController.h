#pragma once

#include "RE/H/hkbRagdollController.h"

namespace RE
{
	class __declspec(novtable) hkbnpRagdollRigidBodyController :
		public hkbRagdollController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpRagdollRigidBodyController };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpRagdollRigidBodyController };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbnpRagdollRigidBodyController) == 0x18);
	static_assert(offsetof(hkbnpRagdollRigidBodyController, unk10) == 0x10);
}
