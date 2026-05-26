#pragma once

#include "RE/B/BSLeafAnimNode.h"

namespace RE
{
	class __declspec(novtable) BSTreeNode : public BSLeafAnimNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTreeNode };
		static constexpr auto VTABLE{ VTABLE::BSTreeNode };
	};
}
