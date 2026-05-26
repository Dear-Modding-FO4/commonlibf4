#pragma once

#include "RE/H/hkbRagdollInterface.h"

namespace RE
{
	class __declspec(novtable) hkbnpSerializedRagdollInterface : public hkbRagdollInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::hkbnpSerializedRagdollInterface };
		static constexpr auto VTABLE{ VTABLE::hkbnpSerializedRagdollInterface };
	};
}
