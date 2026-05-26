#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class __declspec(novtable) hknpCompressedMeshShape : public hknpCompositeShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpCompressedMeshShape };
		static constexpr auto VTABLE{ VTABLE::hknpCompressedMeshShape };
	};
}
