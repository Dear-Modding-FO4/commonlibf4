#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkStreamWriter : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkStreamWriter };
	};
}
