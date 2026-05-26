#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiIntegerExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiIntegerExtraData };
		static constexpr auto VTABLE{ VTABLE::NiIntegerExtraData };
	};
}
