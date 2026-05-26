#pragma once

#include "RE/N/NiAVObjectPalette.h"

namespace RE
{
	class __declspec(novtable) NiDefaultAVObjectPalette : public NiAVObjectPalette
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDefaultAVObjectPalette };
		static constexpr auto VTABLE{ VTABLE::NiDefaultAVObjectPalette };
	};
}
