#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiBooleanExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBooleanExtraData };
		static constexpr auto VTABLE{ VTABLE::NiBooleanExtraData };
	};
}
