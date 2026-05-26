#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) CloakEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::CloakEffect };
		static constexpr auto VTABLE{ VTABLE::CloakEffect };
	};
}
