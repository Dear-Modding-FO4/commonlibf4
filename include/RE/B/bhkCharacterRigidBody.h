#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterRigidBody : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterRigidBody };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterRigidBody };
	};
}
