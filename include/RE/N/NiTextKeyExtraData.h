#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiTextKeyExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTextKeyExtraData };
		static constexpr auto VTABLE{ VTABLE::NiTextKeyExtraData };
	};
}
