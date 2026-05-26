#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiVectorExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiVectorExtraData };
		static constexpr auto VTABLE{ VTABLE::NiVectorExtraData };
	};
}
