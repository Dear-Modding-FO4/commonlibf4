#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkReferencedObject;

	class __declspec(novtable) hkaBoneAttachment :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaBoneAttachment };
		inline static constexpr auto VTABLE{ VTABLE::hkaBoneAttachment };

		// members
		hkStringPtr m_originalSkeletonName;       // 0x10
		std::uint8_t unk18[0x8];                  // 0x18
		std::uint8_t m_boneFromAttachment[0x40];  // 0x20
		hkReferencedObject* m_attachment;         // 0x60
		hkStringPtr m_name;                       // 0x68
		std::int16_t m_boneIndex;                 // 0x70
		std::uint8_t unk72[0xE];                  // 0x72
	};
	static_assert(sizeof(hkaBoneAttachment) == 0x80);
	static_assert(offsetof(hkaBoneAttachment, m_originalSkeletonName) == 0x10);
	static_assert(offsetof(hkaBoneAttachment, m_boneFromAttachment) == 0x20);
	static_assert(offsetof(hkaBoneAttachment, m_attachment) == 0x60);
	static_assert(offsetof(hkaBoneAttachment, m_name) == 0x68);
	static_assert(offsetof(hkaBoneAttachment, m_boneIndex) == 0x70);
}
