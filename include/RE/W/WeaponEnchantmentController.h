#pragma once

#include "RE/R/ReferenceEffectController.h"

namespace RE
{
	class __declspec(novtable) WeaponEnchantmentController : public ReferenceEffectController
	{
	public:
		static constexpr auto RTTI{ RTTI::WeaponEnchantmentController };
		static constexpr auto VTABLE{ VTABLE::WeaponEnchantmentController };
	};
}
