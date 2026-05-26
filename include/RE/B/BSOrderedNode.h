#pragma once

#include "RE/B/BSNiNode.h"

namespace RE
{
	class __declspec(novtable) BSOrderedNode : public BSNiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSOrderedNode };
		static constexpr auto VTABLE{ VTABLE::BSOrderedNode };
	};
}
