#pragma once

#include "RE/N/NiLight.h"

namespace RE
{
	class __declspec(novtable) NiDirectionalLight : public NiLight
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDirectionalLight };
		static constexpr auto VTABLE{ VTABLE::NiDirectionalLight };
	};
}
