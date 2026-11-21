#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkReferencedObject;

	class hkxAttribute
	{
	public:

		enum class Hint : std::uint32_t
		{
			kHintNone = 0,
			kHintIgnore = 1,
			kHintTransform = 2,
			kHintScale = 4,
			kHintTransformAndScale = 6,
			kHintFlip = 8
		};

		// members
		hkStringPtr m_name;           // 0x00
		hkReferencedObject* m_value;  // 0x08
	};
	static_assert(sizeof(hkxAttribute) == 0x10);
	static_assert(offsetof(hkxAttribute, m_name) == 0x0);
	static_assert(offsetof(hkxAttribute, m_value) == 0x8);
}
