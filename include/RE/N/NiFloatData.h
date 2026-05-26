#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiFloatData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatData };
		static constexpr auto VTABLE{ VTABLE::NiFloatData };
	};
}
