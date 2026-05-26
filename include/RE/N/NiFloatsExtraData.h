#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiFloatsExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatsExtraData };
		static constexpr auto VTABLE{ VTABLE::NiFloatsExtraData };
	};
}
