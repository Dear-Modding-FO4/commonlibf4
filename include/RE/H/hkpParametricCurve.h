#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkpParametricCurve : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpParametricCurve };
		static constexpr auto VTABLE{ VTABLE::hkpParametricCurve };
	};
}
