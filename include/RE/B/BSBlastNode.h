#pragma once

#include "RE/B/BSRangeNode.h"

namespace RE
{
	class __declspec(novtable) BSBlastNode : public BSRangeNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBlastNode };
		static constexpr auto VTABLE{ VTABLE::BSBlastNode };
	};
}
