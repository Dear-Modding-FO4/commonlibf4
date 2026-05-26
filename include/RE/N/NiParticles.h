#pragma once

#include "RE/B/BSGeometry.h"

namespace RE
{
	class __declspec(novtable) NiParticles : public BSGeometry
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticles };
		static constexpr auto VTABLE{ VTABLE::NiParticles };
	};
}
