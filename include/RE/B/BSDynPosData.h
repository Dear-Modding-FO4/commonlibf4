#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSDynPosData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDynPosData };
		static constexpr auto VTABLE{ VTABLE::BSDynPosData };
	};
}
