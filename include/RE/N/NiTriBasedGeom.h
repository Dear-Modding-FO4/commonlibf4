#pragma once

#include "RE/N/NiGeometry.h"

namespace RE
{
	class __declspec(novtable) NiTriBasedGeom : public NiGeometry
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriBasedGeom };
		static constexpr auto VTABLE{ VTABLE::NiTriBasedGeom };
	};
}
