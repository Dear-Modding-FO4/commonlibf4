#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class __declspec(novtable) hknpExternMeshShape : public hknpCompositeShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpExternMeshShape };
		static constexpr auto VTABLE{ VTABLE::hknpExternMeshShape };
	};
}
