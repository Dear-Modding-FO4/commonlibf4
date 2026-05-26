#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiInterpController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiInterpController };
		static constexpr auto VTABLE{ VTABLE::NiInterpController };
	};
}
