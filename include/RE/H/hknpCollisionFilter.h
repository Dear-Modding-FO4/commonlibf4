#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpCollisionFilter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCollisionFilter };
		inline static constexpr auto VTABLE{ VTABLE::hknpCollisionFilter };
		enum class Type : std::uint32_t
		{
			kTypeUnknown = 0,
			kTypeConstraint = 1,
			kTypeGroup = 2,
			kTypePair = 3,
			kTypeUser = 4
		};

	};
	static_assert(sizeof(hknpCollisionFilter) == 0x10);
}
