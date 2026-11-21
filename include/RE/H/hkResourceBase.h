#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkResourceBase :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkResourceBase };
		inline static constexpr auto VTABLE{ VTABLE::hkResourceBase };
		enum class Type : std::uint32_t
		{
			kTypeResource = 0,
			kTypeContainer = 1
		};

	};
	static_assert(sizeof(hkResourceBase) == 0x10);
}
