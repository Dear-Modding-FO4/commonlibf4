#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiFloatExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatExtraData };
		static constexpr auto VTABLE{ VTABLE::NiFloatExtraData };
	};
}
