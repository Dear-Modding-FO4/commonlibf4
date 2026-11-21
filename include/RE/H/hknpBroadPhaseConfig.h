#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpBroadPhaseConfig :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBroadPhaseConfig };
		inline static constexpr auto VTABLE{ VTABLE::hknpBroadPhaseConfig };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void getLayerIndices();  // 0x30 [06] (hknpBodyId__int_hknpBody__uchar_)
	};
	static_assert(sizeof(hknpBroadPhaseConfig) == 0x10);
}
