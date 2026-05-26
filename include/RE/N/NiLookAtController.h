#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiLookAtController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLookAtController };
		static constexpr auto VTABLE{ VTABLE::NiLookAtController };
	};
}
