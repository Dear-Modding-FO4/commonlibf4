#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiRotData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRotData };
		static constexpr auto VTABLE{ VTABLE::NiRotData };
	};
}
