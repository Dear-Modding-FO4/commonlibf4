#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiSkinInstance : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSkinInstance };
		static constexpr auto VTABLE{ VTABLE::NiSkinInstance };
	};
}
