#pragma once

#include "RE/N/NiParticlesData.h"

namespace RE
{
	class __declspec(novtable) NiPSysData : public NiParticlesData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysData };
		static constexpr auto VTABLE{ VTABLE::NiPSysData };
	};
}
