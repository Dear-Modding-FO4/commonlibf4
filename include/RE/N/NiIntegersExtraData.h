#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) NiIntegersExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiIntegersExtraData };
		static constexpr auto VTABLE{ VTABLE::NiIntegersExtraData };
	};
}
