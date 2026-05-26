#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiPosData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPosData };
		static constexpr auto VTABLE{ VTABLE::NiPosData };
	};
}
