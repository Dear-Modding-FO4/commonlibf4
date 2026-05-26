#pragma once

#include "RE/B/BSNiNode.h"

namespace RE
{
	class __declspec(novtable) BSValueNode : public BSNiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSValueNode };
		static constexpr auto VTABLE{ VTABLE::BSValueNode };
	};
}
