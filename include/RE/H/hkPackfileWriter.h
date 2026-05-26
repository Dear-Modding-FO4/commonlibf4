#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkPackfileWriter : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkPackfileWriter };
		static constexpr auto VTABLE{ VTABLE::hkPackfileWriter };
	};
}
