#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BGSRetargetOnDeleteExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSRetargetOnDeleteExtraData };
		static constexpr auto VTABLE{ VTABLE::BGSRetargetOnDeleteExtraData };
	};
}
