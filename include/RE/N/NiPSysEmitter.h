#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysEmitter : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysEmitter };
		static constexpr auto VTABLE{ VTABLE::NiPSysEmitter };
	};
}
