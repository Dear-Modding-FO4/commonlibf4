#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiAdditionalGeometryData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAdditionalGeometryData };
		static constexpr auto VTABLE{ VTABLE::NiAdditionalGeometryData };
	};
}
