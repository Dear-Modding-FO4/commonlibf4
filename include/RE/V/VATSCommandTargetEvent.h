#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTEvent.h"

namespace RE
{
	class VATSCommandTargetEvent :
		public BSTValueEvent<ObjectRefHandle>  // 00
	{
	public:
	};
	static_assert(sizeof(VATSCommandTargetEvent) == 0x08);
}
