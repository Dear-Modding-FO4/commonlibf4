#pragma once

#include "RE/N/NiLight.h"

namespace RE
{
	class __declspec(novtable) NiPointLight : public NiLight
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPointLight };
		static constexpr auto VTABLE{ VTABLE::NiPointLight };
	};
}
