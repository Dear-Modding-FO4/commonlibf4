#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class __declspec(novtable) NiSwitchNode : public NiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSwitchNode };
		static constexpr auto VTABLE{ VTABLE::NiSwitchNode };
	};
}
