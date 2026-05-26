#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) BSSimpleScaleController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSimpleScaleController };
		static constexpr auto VTABLE{ VTABLE::BSSimpleScaleController };
	};
}
