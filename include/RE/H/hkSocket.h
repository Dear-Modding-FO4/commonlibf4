#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkSocket : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSocket };
		static constexpr auto VTABLE{ VTABLE::hkSocket };
	};
}
