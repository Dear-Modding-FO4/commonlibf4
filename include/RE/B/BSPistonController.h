#pragma once

#include "RE/N/NiCollisionObject.h"

namespace RE
{
	class __declspec(novtable) BSPistonController : public NiCollisionObject
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPistonController };
		static constexpr auto VTABLE{ VTABLE::BSPistonController };
	};
}
