#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiPSysUpdateCtlr : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysUpdateCtlr };
		static constexpr auto VTABLE{ VTABLE::NiPSysUpdateCtlr };
	};
}
