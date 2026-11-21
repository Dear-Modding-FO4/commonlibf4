#pragma once

#include "RE/H/hkbShapeSetup.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbRigidBodySetup
	{
	public:

		enum class Type : std::int8_t
		{
			kInvalid = -1,
			kKeyframed = 0,
			kDynamic = 1,
			kFixed = 2
		};

		// members
		std::uint32_t m_collisionFilterInfo;  // 0x00
		hkEnum<Type, std::int8_t> m_type;                   // 0x04
		std::uint8_t unk05[0x3];              // 0x05
		hkbShapeSetup m_shapeSetup;           // 0x08
	};
	static_assert(sizeof(hkbRigidBodySetup) == 0x20);
	static_assert(offsetof(hkbRigidBodySetup, m_collisionFilterInfo) == 0x0);
	static_assert(offsetof(hkbRigidBodySetup, m_type) == 0x4);
	static_assert(offsetof(hkbRigidBodySetup, m_shapeSetup) == 0x8);
}
