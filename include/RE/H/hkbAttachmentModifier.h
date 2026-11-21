#pragma once

#include "RE/H/hkbEventProperty.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbAttachmentSetup;
	class hkbHandle;

	class __declspec(novtable) hkbAttachmentModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAttachmentModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbAttachmentModifier };

		// members
		hkbEventProperty m_sendToAttacherOnAttach;  // 0x58
		hkbEventProperty m_sendToAttacheeOnAttach;  // 0x68
		hkbEventProperty m_sendToAttacherOnDetach;  // 0x78
		hkbEventProperty m_sendToAttacheeOnDetach;  // 0x88
		hkbAttachmentSetup* m_attachmentSetup;      // 0x98
		hkbHandle* m_attacherHandle;                // 0xA0
		hkbHandle* m_attacheeHandle;                // 0xA8
		std::int32_t m_attacheeLayer;               // 0xB0
		std::uint8_t padB4[0x4];                    // 0xB4
		void* m_attacheeRB;                         // 0xB8
		std::uint8_t m_oldMotionType;               // 0xC0
		std::uint8_t padC1[0x3];                    // 0xC1
		std::int32_t m_oldFilterInfo;               // 0xC4
		void* m_attachment;                         // 0xC8
	};
	static_assert(sizeof(hkbAttachmentModifier) == 0xD0);
	static_assert(offsetof(hkbAttachmentModifier, m_sendToAttacherOnAttach) == 0x58);
	static_assert(offsetof(hkbAttachmentModifier, m_sendToAttacheeOnAttach) == 0x68);
	static_assert(offsetof(hkbAttachmentModifier, m_sendToAttacherOnDetach) == 0x78);
	static_assert(offsetof(hkbAttachmentModifier, m_sendToAttacheeOnDetach) == 0x88);
	static_assert(offsetof(hkbAttachmentModifier, m_attachmentSetup) == 0x98);
	static_assert(offsetof(hkbAttachmentModifier, m_attacherHandle) == 0xA0);
	static_assert(offsetof(hkbAttachmentModifier, m_attacheeHandle) == 0xA8);
	static_assert(offsetof(hkbAttachmentModifier, m_attacheeLayer) == 0xB0);
	static_assert(offsetof(hkbAttachmentModifier, m_attacheeRB) == 0xB8);
	static_assert(offsetof(hkbAttachmentModifier, m_oldMotionType) == 0xC0);
	static_assert(offsetof(hkbAttachmentModifier, m_oldFilterInfo) == 0xC4);
	static_assert(offsetof(hkbAttachmentModifier, m_attachment) == 0xC8);
}
