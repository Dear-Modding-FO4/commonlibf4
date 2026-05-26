#pragma once

#include "RE/N/NiAVObject.h"

namespace RE
{
	class __declspec(novtable) NiGeometry : public NiAVObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometry };
		static constexpr auto VTABLE{ VTABLE::NiGeometry };
	};
}
