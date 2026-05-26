#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiSwitchStringExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSwitchStringExtraData };
		static constexpr auto VTABLE{ VTABLE::NiSwitchStringExtraData };
	};
}
