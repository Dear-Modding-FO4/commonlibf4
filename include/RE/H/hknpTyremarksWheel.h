#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpTyremarkPoint;

	class __declspec(novtable) hknpTyremarksWheel :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpTyremarksWheel };
		inline static constexpr auto VTABLE{ VTABLE::hknpTyremarksWheel };

		// members
		std::int32_t m_currentPosition;               // 0x10
		std::int32_t m_numPoints;                     // 0x14
		hkArray<hknpTyremarkPoint> m_tyremarkPoints;  // 0x18
	};
	static_assert(sizeof(hknpTyremarksWheel) == 0x28);
	static_assert(offsetof(hknpTyremarksWheel, m_currentPosition) == 0x10);
	static_assert(offsetof(hknpTyremarksWheel, m_numPoints) == 0x14);
	static_assert(offsetof(hknpTyremarksWheel, m_tyremarkPoints) == 0x18);
}
