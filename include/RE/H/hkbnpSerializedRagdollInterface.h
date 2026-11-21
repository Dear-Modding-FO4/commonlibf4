#pragma once

#include "RE/H/hkbRagdollInterface.h"

namespace RE
{
	class __declspec(novtable) hkbnpSerializedRagdollInterface :
		public hkbRagdollInterface  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpSerializedRagdollInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpSerializedRagdollInterface };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbnpSerializedRagdollInterface) == 0x18);
	static_assert(offsetof(hkbnpSerializedRagdollInterface, unk10) == 0x10);
}
