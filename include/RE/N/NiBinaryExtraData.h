#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiBinaryExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBinaryExtraData };
		static constexpr auto VTABLE{ VTABLE::NiBinaryExtraData };
	};
}
