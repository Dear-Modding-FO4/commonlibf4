#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiPathController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPathController };
		static constexpr auto VTABLE{ VTABLE::NiPathController };
	};
}
