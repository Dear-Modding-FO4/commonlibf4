#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiParticlesData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticlesData };
		static constexpr auto VTABLE{ VTABLE::NiParticlesData };
	};
}
