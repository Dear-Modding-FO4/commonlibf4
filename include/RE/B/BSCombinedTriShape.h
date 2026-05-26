#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSCombinedTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSCombinedTriShape };
		static constexpr auto VTABLE{ VTABLE::BSCombinedTriShape };
	};
}
