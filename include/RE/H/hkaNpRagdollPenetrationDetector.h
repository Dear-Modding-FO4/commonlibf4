#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkaNpRagdollPenetrationDetector :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaNpRagdollPenetrationDetector };
		inline static constexpr auto VTABLE{ VTABLE::hkaNpRagdollPenetrationDetector };

		// members
		hkVector4f unk10;  // 0x10
		std::uint8_t unk20[0x8];  // 0x20
		hkArray<std::uint32_t> unk28;  // 0x28
		std::uint8_t unk38[0x8];   // 0x38
	};
	static_assert(sizeof(hkaNpRagdollPenetrationDetector) == 0x40);
	static_assert(offsetof(hkaNpRagdollPenetrationDetector, unk10) == 0x10);
	static_assert(offsetof(hkaNpRagdollPenetrationDetector, unk20) == 0x20);
	static_assert(offsetof(hkaNpRagdollPenetrationDetector, unk28) == 0x28);
}
