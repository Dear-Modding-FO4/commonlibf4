#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaAnimationControl : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimationControl };
		static constexpr auto VTABLE{ VTABLE::hkaAnimationControl };
	};
}
