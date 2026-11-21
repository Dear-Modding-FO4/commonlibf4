#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbnpRagdollSkeletonRemapData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpRagdollSkeletonRemapData };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpRagdollSkeletonRemapData };

		// members
		std::uint8_t unk10[0xC];  // 0x10
		std::uint32_t unk1C;  // 0x1C
		std::uint32_t unk20;  // 0x20
		std::uint32_t unk24;  // 0x24
		void* unk28;  // 0x28
		std::uint8_t unk30[0x8];  // 0x30
		void* unk38;  // 0x38
	};
	static_assert(sizeof(hkbnpRagdollSkeletonRemapData) == 0x40);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk10) == 0x10);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk1C) == 0x1C);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk20) == 0x20);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk24) == 0x24);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk28) == 0x28);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk30) == 0x30);
	static_assert(offsetof(hkbnpRagdollSkeletonRemapData, unk38) == 0x38);
}
