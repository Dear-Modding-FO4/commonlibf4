#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hknpBodyQuality.h"

namespace RE
{
	class __declspec(novtable) hknpBodyQualityLibrary :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBodyQualityLibrary };
		inline static constexpr auto VTABLE{ VTABLE::hknpBodyQualityLibrary };

		// members
		void* m_qualityModifiedSignal;    // 0x10
		std::uint8_t unk18[0x8];          // 0x18
		hknpBodyQuality m_qualities[32];  // 0x20
	};
	static_assert(sizeof(hknpBodyQualityLibrary) == 0x220);
	static_assert(offsetof(hknpBodyQualityLibrary, m_qualityModifiedSignal) == 0x10);
	static_assert(offsetof(hknpBodyQualityLibrary, m_qualities) == 0x20);
}
