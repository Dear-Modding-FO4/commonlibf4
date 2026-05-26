#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshVertexBuffer : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMeshVertexBuffer };
		static constexpr auto VTABLE{ VTABLE::hkMeshVertexBuffer };
	};
}
