#pragma once

#include "RE/B/BSRangeNode.h"

namespace RE
{
	class __declspec(novtable) BSDebrisNode : public BSRangeNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDebrisNode };
		static constexpr auto VTABLE{ VTABLE::BSDebrisNode };
	};
}
