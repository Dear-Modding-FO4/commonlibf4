#pragma once

#include "RE/B/BSNiNode.h"

namespace RE
{
	class __declspec(novtable) BSRangeNode : public BSNiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSRangeNode };
		static constexpr auto VTABLE{ VTABLE::BSRangeNode };
	};
}
