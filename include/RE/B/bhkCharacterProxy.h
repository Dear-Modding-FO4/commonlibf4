#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterProxy : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterProxy };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterProxy };
	};
}
