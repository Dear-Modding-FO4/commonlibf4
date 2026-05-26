#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiStringsExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStringsExtraData };
		static constexpr auto VTABLE{ VTABLE::NiStringsExtraData };
	};
}
