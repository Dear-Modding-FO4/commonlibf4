#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbShapeSetup
	{
	public:

		enum class Type : std::uint8_t
		{
			kCapsule = 0,
			kFile = 1
		};

		// members
		float m_capsuleHeight;   // 0x00
		float m_capsuleRadius;   // 0x04
		hkStringPtr m_fileName;  // 0x08
		hkEnum<Type, std::int8_t> m_type;      // 0x10
	};
	static_assert(sizeof(hkbShapeSetup) == 0x18);
	static_assert(offsetof(hkbShapeSetup, m_capsuleHeight) == 0x0);
	static_assert(offsetof(hkbShapeSetup, m_capsuleRadius) == 0x4);
	static_assert(offsetof(hkbShapeSetup, m_fileName) == 0x8);
	static_assert(offsetof(hkbShapeSetup, m_type) == 0x10);
}
