#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSSegmentDataStorage : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSegmentDataStorage };
		static constexpr auto VTABLE{ VTABLE::BSSegmentDataStorage };
	};
}
