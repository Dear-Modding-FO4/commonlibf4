#pragma once

#include "RE/B/BSPackedCombinedGeomDataExtra.h"

namespace RE
{
	class __declspec(novtable) BSPackedCombinedSharedGeomDataExtra : public BSPackedCombinedGeomDataExtra
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPackedCombinedSharedGeomDataExtra };
		static constexpr auto VTABLE{ VTABLE::BSPackedCombinedSharedGeomDataExtra };
	};
}
