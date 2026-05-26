#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiColorData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiColorData };
		static constexpr auto VTABLE{ VTABLE::NiColorData };
	};
}
