#pragma once

#include "RE/N/NiPointLight.h"

namespace RE
{
	class __declspec(novtable) NiSpotLight : public NiPointLight
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSpotLight };
		static constexpr auto VTABLE{ VTABLE::NiSpotLight };
	};
}
