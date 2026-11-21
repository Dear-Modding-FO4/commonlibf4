#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpTyremarksWheel;

	class __declspec(novtable) hknpTyremarksInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpTyremarksInfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpTyremarksInfo };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void getWheelTyremarksStrips();  // 0x28 [05] (hknpVehicleInstance__int_hkVector4f_)

		// members
		float m_minTyremarkEnergy;                      // 0x10
		float m_maxTyremarkEnergy;                      // 0x14
		hkArray<hknpTyremarksWheel*> m_tyremarksWheel;  // 0x18
	};
	static_assert(sizeof(hknpTyremarksInfo) == 0x28);
	static_assert(offsetof(hknpTyremarksInfo, m_minTyremarkEnergy) == 0x10);
	static_assert(offsetof(hknpTyremarksInfo, m_maxTyremarkEnergy) == 0x14);
	static_assert(offsetof(hknpTyremarksInfo, m_tyremarksWheel) == 0x18);
}
