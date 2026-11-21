#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbMoveBoneAttachmentModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbMoveBoneAttachmentModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbMoveBoneAttachmentModifier };

		// members
		std::int32_t m_activateEventId;  // 0x58
		std::uint8_t pad5C[0x4];         // 0x5C
		hkStringPtr m_attachment;        // 0x60
		hkStringPtr m_localFrame;        // 0x68
	};
	static_assert(sizeof(hkbMoveBoneAttachmentModifier) == 0x70);
	static_assert(offsetof(hkbMoveBoneAttachmentModifier, m_activateEventId) == 0x58);
	static_assert(offsetof(hkbMoveBoneAttachmentModifier, m_attachment) == 0x60);
	static_assert(offsetof(hkbMoveBoneAttachmentModifier, m_localFrame) == 0x68);
}
