#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbProjectStringData;

	class __declspec(novtable) hkbProjectData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbProjectData };
		inline static constexpr auto VTABLE{ VTABLE::hkbProjectData };

		// members
		hkVector4f m_worldUpWS;              // 0x10
		hkbProjectStringData* m_stringData;  // 0x20
		std::int8_t m_defaultEventMode;      // 0x28
	};
	static_assert(sizeof(hkbProjectData) == 0x30);
	static_assert(offsetof(hkbProjectData, m_worldUpWS) == 0x10);
	static_assert(offsetof(hkbProjectData, m_stringData) == 0x20);
	static_assert(offsetof(hkbProjectData, m_defaultEventMode) == 0x28);
}
