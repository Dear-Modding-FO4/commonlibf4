#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbVariableBindingSetBinding
	{
	public:

		enum class BindingType : std::uint8_t
		{
			kBindingTypeVariable = 0,
			kBindingTypeCharacterProperty = 1
		};

		enum class InternalBindingFlags : std::uint32_t
		{
			kFlagNone = 0,
			kFlagOutput = 1
		};

		// members
		hkStringPtr m_memberPath;              // 0x00
		void* m_memberClass;                   // 0x08
		std::int32_t m_offsetInObjectPlusOne;  // 0x10
		std::int32_t m_offsetInArrayPlusOne;   // 0x14
		std::int32_t m_rootVariableIndex;      // 0x18
		std::int32_t m_variableIndex;          // 0x1C
		std::int8_t m_bitIndex;                // 0x20
		hkEnum<BindingType, std::int8_t> m_bindingType;             // 0x21
		std::uint8_t m_memberType;             // 0x22
		std::int8_t m_variableType;            // 0x23
		std::int8_t m_flags;                   // 0x24
	};
	static_assert(sizeof(hkbVariableBindingSetBinding) == 0x28);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_memberPath) == 0x0);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_memberClass) == 0x8);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_offsetInObjectPlusOne) == 0x10);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_offsetInArrayPlusOne) == 0x14);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_rootVariableIndex) == 0x18);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_variableIndex) == 0x1C);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_bitIndex) == 0x20);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_bindingType) == 0x21);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_memberType) == 0x22);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_variableType) == 0x23);
	static_assert(offsetof(hkbVariableBindingSetBinding, m_flags) == 0x24);
}
