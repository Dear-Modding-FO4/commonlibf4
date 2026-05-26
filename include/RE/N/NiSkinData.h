#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiSkinData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSkinData };
		static constexpr auto VTABLE{ VTABLE::NiSkinData };
	};
}
