#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSetLocalTimeOfClipGeneratorCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetLocalTimeOfClipGeneratorCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetLocalTimeOfClipGeneratorCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
		float m_localTime;            // 0x18
		std::uint16_t m_nodeId;       // 0x1C
	};
	static_assert(sizeof(hkbSetLocalTimeOfClipGeneratorCommand) == 0x20);
	static_assert(offsetof(hkbSetLocalTimeOfClipGeneratorCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbSetLocalTimeOfClipGeneratorCommand, m_localTime) == 0x18);
	static_assert(offsetof(hkbSetLocalTimeOfClipGeneratorCommand, m_nodeId) == 0x1C);
}
