#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) BSDoorHavokController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDoorHavokController };
		static constexpr auto VTABLE{ VTABLE::BSDoorHavokController };
	};
}
