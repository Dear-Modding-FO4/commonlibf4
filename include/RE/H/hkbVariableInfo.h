#pragma once

#include "RE/H/hkbRoleAttribute.h"

namespace RE
{
	class hkbVariableInfo
	{
	public:

		enum class VariableType : std::uint32_t
		{
			kVariableTypeInvalid = 0xFFFFFFFF,
			kVariableTypeBool = 0,
			kVariableTypeInt8 = 1,
			kVariableTypeInt16 = 2,
			kVariableTypeInt32 = 3,
			kVariableTypeReal = 4,
			kVariableTypePointer = 5,
			kVariableTypeVector3 = 6,
			kVariableTypeVector4 = 7,
			kVariableTypeQuaternion = 8
		};

		// members
		hkbRoleAttribute m_role;  // 0x00
		std::int8_t m_type;       // 0x04
	};
	static_assert(sizeof(hkbVariableInfo) == 0x6);
	static_assert(offsetof(hkbVariableInfo, m_role) == 0x0);
	static_assert(offsetof(hkbVariableInfo, m_type) == 0x4);
}
