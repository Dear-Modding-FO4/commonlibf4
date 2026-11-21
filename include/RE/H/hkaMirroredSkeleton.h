#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaMirroredSkeleton :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaMirroredSkeleton };
		inline static constexpr auto VTABLE{ VTABLE::hkaMirroredSkeleton };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		void* unk20;  // 0x20
		void* unk28;  // 0x28
		std::uint32_t unk30;  // 0x30
		std::uint8_t pad34[0x4];  // 0x34
		void* unk38;  // 0x38
		std::uint8_t unk40[0x18];  // 0x40
		void* unk58;  // 0x58
		std::uint16_t unk60;  // 0x60
		std::uint8_t pad62[0x6];  // 0x62
	};
	static_assert(sizeof(hkaMirroredSkeleton) == 0x68);
	static_assert(offsetof(hkaMirroredSkeleton, unk10) == 0x10);
	static_assert(offsetof(hkaMirroredSkeleton, unk18) == 0x18);
	static_assert(offsetof(hkaMirroredSkeleton, unk20) == 0x20);
	static_assert(offsetof(hkaMirroredSkeleton, unk28) == 0x28);
	static_assert(offsetof(hkaMirroredSkeleton, unk30) == 0x30);
	static_assert(offsetof(hkaMirroredSkeleton, pad34) == 0x34);
	static_assert(offsetof(hkaMirroredSkeleton, unk38) == 0x38);
	static_assert(offsetof(hkaMirroredSkeleton, unk40) == 0x40);
	static_assert(offsetof(hkaMirroredSkeleton, unk58) == 0x58);
	static_assert(offsetof(hkaMirroredSkeleton, unk60) == 0x60);
	static_assert(offsetof(hkaMirroredSkeleton, pad62) == 0x62);
}
