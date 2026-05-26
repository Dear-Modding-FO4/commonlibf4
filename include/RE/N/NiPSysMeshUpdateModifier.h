#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysMeshUpdateModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysMeshUpdateModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysMeshUpdateModifier };
	};
}
