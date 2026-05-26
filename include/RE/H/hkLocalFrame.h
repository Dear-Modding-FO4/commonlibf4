#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkLocalFrame : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLocalFrame };
		static constexpr auto VTABLE{ VTABLE::hkLocalFrame };
	};
}
