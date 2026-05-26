#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterController : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkbCharacterController };
		static constexpr auto VTABLE{ VTABLE::hkbCharacterController };
	};
}
