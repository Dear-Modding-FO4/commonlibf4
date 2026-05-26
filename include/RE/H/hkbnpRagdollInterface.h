#pragma once

#include "RE/H/hkbRagdollInterface.h"

namespace RE
{
	class __declspec(novtable) hkbnpRagdollInterface : public hkbRagdollInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::hkbnpRagdollInterface };
		static constexpr auto VTABLE{ VTABLE::hkbnpRagdollInterface };
	};
}
