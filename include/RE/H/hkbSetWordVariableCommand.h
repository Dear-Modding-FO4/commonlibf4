#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbVariableValue.h"

namespace RE
{
	class __declspec(novtable) hkbSetWordVariableCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetWordVariableCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetWordVariableCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
		hkStringPtr m_variableName;   // 0x18
		hkbVariableValue m_value;     // 0x20
		std::uint8_t unk24[0xC];      // 0x24
		hkVector4f m_quadValue;       // 0x30
		std::uint8_t m_type;          // 0x40
		bool m_global;                // 0x41
	};
	static_assert(sizeof(hkbSetWordVariableCommand) == 0x50);
	static_assert(offsetof(hkbSetWordVariableCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbSetWordVariableCommand, m_variableName) == 0x18);
	static_assert(offsetof(hkbSetWordVariableCommand, m_value) == 0x20);
	static_assert(offsetof(hkbSetWordVariableCommand, m_quadValue) == 0x30);
	static_assert(offsetof(hkbSetWordVariableCommand, m_type) == 0x40);
	static_assert(offsetof(hkbSetWordVariableCommand, m_global) == 0x41);
}
