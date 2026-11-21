#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpExternMeshShapeGeometry :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpExternMeshShapeGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hknpExternMeshShapeGeometry };
	};
	static_assert(sizeof(hknpExternMeshShapeGeometry) == 0x10);
}
