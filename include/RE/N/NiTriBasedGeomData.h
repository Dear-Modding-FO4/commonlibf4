#pragma once

#include "RE/N/NiGeometryData.h"

namespace RE
{
	class __declspec(novtable) NiTriBasedGeomData : public NiGeometryData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriBasedGeomData };
		static constexpr auto VTABLE{ VTABLE::NiTriBasedGeomData };
	};
}
