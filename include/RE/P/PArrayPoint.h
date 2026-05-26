#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) PArrayPoint : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::PArrayPoint };
		static constexpr auto VTABLE{ VTABLE::PArrayPoint };
	};
}
