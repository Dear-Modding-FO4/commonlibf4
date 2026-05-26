#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiPSysResetOnLoopCtlr : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysResetOnLoopCtlr };
		static constexpr auto VTABLE{ VTABLE::NiPSysResetOnLoopCtlr };
	};
}
