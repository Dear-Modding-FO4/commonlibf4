#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSPositionData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPositionData };
		static constexpr auto VTABLE{ VTABLE::BSPositionData };
	};
}
