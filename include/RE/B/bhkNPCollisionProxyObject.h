#pragma once

#include "RE/B/bhkNPCollisionObjectBase.h"

namespace RE
{
	class __declspec(novtable) bhkNPCollisionProxyObject :
		public bhkNPCollisionObjectBase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkNPCollisionProxyObject };
		inline static constexpr auto VTABLE{ VTABLE::bhkNPCollisionProxyObject };
	};
	static_assert(sizeof(bhkNPCollisionProxyObject) == 0x20);
}
