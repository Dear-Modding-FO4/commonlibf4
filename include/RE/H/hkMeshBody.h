#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshBody : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMeshBody };
		static constexpr auto VTABLE{ VTABLE::hkMeshBody };
	};
}
