#pragma once

#include "RE/N/NiFloatController.h"

namespace RE
{
	class __declspec(novtable) NiRollController : public NiFloatController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRollController };
		static constexpr auto VTABLE{ VTABLE::NiRollController };
	};
}
