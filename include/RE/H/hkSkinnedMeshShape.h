#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkSkinnedMeshShape : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSkinnedMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkSkinnedMeshShape };
	};
}
