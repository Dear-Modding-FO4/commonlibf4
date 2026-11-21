#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbLayerGeneratorLayerInternalState;

	class __declspec(novtable) hkbLayerGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLayerGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbLayerGeneratorInternalState };

		// members
		std::int32_t m_numActiveLayers;                                      // 0x10
		std::uint8_t pad14[0x4];                                             // 0x14
		hkArray<hkbLayerGeneratorLayerInternalState> m_layerInternalStates;  // 0x18
		bool m_initSync;                                                     // 0x28
	};
	static_assert(sizeof(hkbLayerGeneratorInternalState) == 0x30);
	static_assert(offsetof(hkbLayerGeneratorInternalState, m_numActiveLayers) == 0x10);
	static_assert(offsetof(hkbLayerGeneratorInternalState, m_layerInternalStates) == 0x18);
	static_assert(offsetof(hkbLayerGeneratorInternalState, m_initSync) == 0x28);
}
