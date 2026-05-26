#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiBSplineBasisData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineBasisData };
		static constexpr auto VTABLE{ VTABLE::NiBSplineBasisData };
	};
}
