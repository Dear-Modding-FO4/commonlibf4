#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSShaderMaterialExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShaderMaterialExtraData };
		static constexpr auto VTABLE{ VTABLE::BSShaderMaterialExtraData };
	};
}
