#pragma once

#include "RE/B/BSRangeNode.h"

namespace RE
{
	class __declspec(novtable) BSDamageStage : public BSRangeNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDamageStage };
		static constexpr auto VTABLE{ VTABLE::BSDamageStage };
	};
}
