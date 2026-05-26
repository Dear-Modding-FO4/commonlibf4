#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSTransformExtra : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTransformExtra };
		static constexpr auto VTABLE{ VTABLE::BSTransformExtra };
	};
}
