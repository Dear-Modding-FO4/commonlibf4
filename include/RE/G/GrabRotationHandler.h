#pragma once

#include "RE/H/HeldStateHandler.h"

namespace RE
{
	class __declspec(novtable) GrabRotationHandler : public HeldStateHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::GrabRotationHandler };
		static constexpr auto VTABLE{ VTABLE::GrabRotationHandler };
	};
}
