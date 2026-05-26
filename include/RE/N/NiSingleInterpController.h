#pragma once

#include "RE/N/NiInterpController.h"

namespace RE
{
	class __declspec(novtable) NiSingleInterpController : public NiInterpController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSingleInterpController };
		static constexpr auto VTABLE{ VTABLE::NiSingleInterpController };
	};
}
