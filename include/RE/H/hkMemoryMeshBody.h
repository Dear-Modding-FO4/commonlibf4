#pragma once

#include "RE/H/hkMeshBody.h"

namespace RE
{
	class __declspec(novtable) hkMemoryMeshBody : public hkMeshBody
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryMeshBody };
		static constexpr auto VTABLE{ VTABLE::hkMemoryMeshBody };
	};
}
