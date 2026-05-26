#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSBehaviorGraphExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBehaviorGraphExtraData };
		static constexpr auto VTABLE{ VTABLE::BSBehaviorGraphExtraData };
	};
}
