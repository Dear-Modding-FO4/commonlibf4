#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiMorphData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMorphData };
		static constexpr auto VTABLE{ VTABLE::NiMorphData };
	};
}
