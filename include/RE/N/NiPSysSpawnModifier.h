#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysSpawnModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysSpawnModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysSpawnModifier };
	};
}
