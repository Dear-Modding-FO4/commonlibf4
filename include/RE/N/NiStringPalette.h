#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiStringPalette : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStringPalette };
		static constexpr auto VTABLE{ VTABLE::NiStringPalette };
	};
}
