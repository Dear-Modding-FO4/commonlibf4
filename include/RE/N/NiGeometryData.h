#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiGeometryData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryData };
		static constexpr auto VTABLE{ VTABLE::NiGeometryData };
	};
}
