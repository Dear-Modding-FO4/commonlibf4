#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSNonUniformScaleExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSNonUniformScaleExtraData };
		static constexpr auto VTABLE{ VTABLE::BSNonUniformScaleExtraData };
	};
}
