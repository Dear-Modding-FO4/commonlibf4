#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiFloatController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatController };
		static constexpr auto VTABLE{ VTABLE::NiFloatController };
	};
}
