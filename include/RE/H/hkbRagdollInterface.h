#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRagdollInterface : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkbRagdollInterface };
		static constexpr auto VTABLE{ VTABLE::hkbRagdollInterface };
	};
}
