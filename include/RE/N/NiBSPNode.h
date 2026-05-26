#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class __declspec(novtable) NiBSPNode : public NiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSPNode };
		static constexpr auto VTABLE{ VTABLE::NiBSPNode };
	};
}
