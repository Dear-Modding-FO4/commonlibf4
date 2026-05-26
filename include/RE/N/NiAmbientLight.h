#pragma once

#include "RE/N/NiLight.h"

namespace RE
{
	class __declspec(novtable) NiAmbientLight : public NiLight
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAmbientLight };
		static constexpr auto VTABLE{ VTABLE::NiAmbientLight };
	};
}
