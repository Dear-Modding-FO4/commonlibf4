#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbVariableValue.h"

namespace RE
{
	class __declspec(novtable) hkbSetNodePropertyCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetNodePropertyCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetNodePropertyCommand };

		// members
		std::uint64_t m_characterId;       // 0x10
		hkStringPtr m_nodeName;            // 0x18
		hkStringPtr m_propertyName;        // 0x20
		hkbVariableValue m_propertyValue;  // 0x28
		std::int32_t m_padding;            // 0x2C
	};
	static_assert(sizeof(hkbSetNodePropertyCommand) == 0x30);
	static_assert(offsetof(hkbSetNodePropertyCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbSetNodePropertyCommand, m_nodeName) == 0x18);
	static_assert(offsetof(hkbSetNodePropertyCommand, m_propertyName) == 0x20);
	static_assert(offsetof(hkbSetNodePropertyCommand, m_propertyValue) == 0x28);
	static_assert(offsetof(hkbSetNodePropertyCommand, m_padding) == 0x2C);
}
