#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSPackedCombinedGeomDataExtra : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPackedCombinedGeomDataExtra };
		static constexpr auto VTABLE{ VTABLE::BSPackedCombinedGeomDataExtra };
	};
}
