#pragma once

#include "RE/R/ReferenceEffectController.h"

namespace RE
{
	class __declspec(novtable) OwnedController : public ReferenceEffectController
	{
	public:
		static constexpr auto RTTI{ RTTI::OwnedController };
		static constexpr auto VTABLE{ VTABLE::OwnedController };
	};
}
