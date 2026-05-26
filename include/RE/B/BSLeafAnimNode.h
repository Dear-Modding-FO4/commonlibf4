#pragma once

#include "RE/B/BSFadeNode.h"

namespace RE
{
	class __declspec(novtable) BSLeafAnimNode : public BSFadeNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLeafAnimNode };
		static constexpr auto VTABLE{ VTABLE::BSLeafAnimNode };
	};
}
