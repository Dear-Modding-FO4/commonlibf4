#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiColorExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiColorExtraData };
		static constexpr auto VTABLE{ VTABLE::NiColorExtraData };
	};
}
