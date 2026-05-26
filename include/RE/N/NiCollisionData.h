#pragma once

#include "RE/N/NiCollisionObject.h"

namespace RE
{
	class __declspec(novtable) NiCollisionData : public NiCollisionObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCollisionData };
		static constexpr auto VTABLE{ VTABLE::NiCollisionData };
	};
}
