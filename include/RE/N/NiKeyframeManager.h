#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) NiKeyframeManager : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiKeyframeManager };
		static constexpr auto VTABLE{ VTABLE::NiKeyframeManager };
	};
}
