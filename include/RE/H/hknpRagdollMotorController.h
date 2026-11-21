#pragma once

#include "RE/H/hknpRagdollController.h"

namespace RE
{
	class __declspec(novtable) hknpRagdollMotorController :
		public hknpRagdollController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRagdollMotorController };
		inline static constexpr auto VTABLE{ VTABLE::hknpRagdollMotorController };

		// members
		bool m_motorsEnabled;  // 0x40
	};
	static_assert(sizeof(hknpRagdollMotorController) == 0x48);
	static_assert(offsetof(hknpRagdollMotorController, m_motorsEnabled) == 0x40);
}
