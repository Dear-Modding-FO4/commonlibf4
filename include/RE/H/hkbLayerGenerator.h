#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbLayer;

	class __declspec(novtable) hkbLayerGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLayerGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbLayerGenerator };

		enum class LayerFlagBits : std::uint32_t
		{
			kFlagSync = 1
		};

		// members
		hkArray<hkbLayer*> m_layers;               // 0x88
		std::int16_t m_indexOfSyncMasterChild;     // 0x98
		std::uint16_t m_flags;                     // 0x9A
		std::int32_t m_numActiveLayers;            // 0x9C
		std::uint8_t m_layerInternalStates[0x10];  // 0xA0
		bool m_initSync;                           // 0xB0
	};
	static_assert(sizeof(hkbLayerGenerator) == 0xB8);
	static_assert(offsetof(hkbLayerGenerator, m_layers) == 0x88);
	static_assert(offsetof(hkbLayerGenerator, m_indexOfSyncMasterChild) == 0x98);
	static_assert(offsetof(hkbLayerGenerator, m_flags) == 0x9A);
	static_assert(offsetof(hkbLayerGenerator, m_numActiveLayers) == 0x9C);
	static_assert(offsetof(hkbLayerGenerator, m_layerInternalStates) == 0xA0);
	static_assert(offsetof(hkbLayerGenerator, m_initSync) == 0xB0);
}
