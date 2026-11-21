#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbnpRagdollScaledSkeleton :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpRagdollScaledSkeleton };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpRagdollScaledSkeleton };

		// members
		std::uint32_t unk10;  // 0x10
		std::uint8_t pad14[0x4];  // 0x14
	};
	static_assert(sizeof(hkbnpRagdollScaledSkeleton) == 0x18);
	static_assert(offsetof(hkbnpRagdollScaledSkeleton, unk10) == 0x10);
	static_assert(offsetof(hkbnpRagdollScaledSkeleton, pad14) == 0x14);
}
