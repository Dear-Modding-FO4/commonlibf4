#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiBoolData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBoolData };
		static constexpr auto VTABLE{ VTABLE::NiBoolData };
	};
}
