#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkDataWorld : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataWorld };
		static constexpr auto VTABLE{ VTABLE::hkDataWorld };
	};
}
