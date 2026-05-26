#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) EtherealizationEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::EtherealizationEffect };
		static constexpr auto VTABLE{ VTABLE::EtherealizationEffect };
	};
}
