#pragma once
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbRoleAttribute
	{
	public:

		enum class Role : std::uint16_t
		{
			kRoleDefault = 0,
			kRoleFileName = 1,
			kRoleBoneIndex = 2,
			kRoleEventId = 3,
			kRoleVariableIndex = 4,
			kRoleAttributeIndex = 5,
			kRoleTime = 6,
			kRoleScript = 7,
			kRoleLocalFrame = 8,
			kRoleBoneAttachment = 9
		};

		enum class RoleFlags : std::uint32_t
		{
			kFlagNone = 0,
			kFlagRagdoll = 1,
			kFlagNormalized = 2,
			kFlagNotVariable = 4,
			kFlagHidden = 8,
			kFlagOutput = 16,
			kFlagNotCharacterProperty = 32,
			kFlagChain = 64
		};

		// members
		hkEnum<Role, std::int16_t> m_role;   // 0x00
		std::int16_t m_flags;  // 0x02
	};
	static_assert(sizeof(hkbRoleAttribute) == 0x4);
	static_assert(offsetof(hkbRoleAttribute, m_role) == 0x0);
	static_assert(offsetof(hkbRoleAttribute, m_flags) == 0x2);
}
