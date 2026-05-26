#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) BSPlayerDistanceCheckController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPlayerDistanceCheckController };
		static constexpr auto VTABLE{ VTABLE::BSPlayerDistanceCheckController };
	};
}
