#pragma once

#include "RE/B/BSLines.h"

namespace RE
{
	class __declspec(novtable) BSDynamicLines : public BSLines
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDynamicLines };
		static constexpr auto VTABLE{ VTABLE::BSDynamicLines };
	};
}
