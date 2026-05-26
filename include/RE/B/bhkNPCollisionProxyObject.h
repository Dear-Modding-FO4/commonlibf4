#pragma once

#include "RE/B/bhkNPCollisionObjectBase.h"

namespace RE
{
	class __declspec(novtable) bhkNPCollisionProxyObject : public bhkNPCollisionObjectBase
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkNPCollisionProxyObject };
		static constexpr auto VTABLE{ VTABLE::bhkNPCollisionProxyObject };
	};
}
