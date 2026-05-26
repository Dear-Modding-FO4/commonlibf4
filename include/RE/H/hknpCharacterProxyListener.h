#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpCharacterProxyListener : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpCharacterProxyListener };
		static constexpr auto VTABLE{ VTABLE::hknpCharacterProxyListener };
	};
}
