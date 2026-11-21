#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbCameraVariablesChangedCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCameraVariablesChangedCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbCameraVariablesChangedCommand };

		// members
		hkArray<hkStringPtr> m_cameraVariableFloatNames;   // 0x10
		hkArray<float> m_cameraFloatValues;                // 0x20
		hkArray<hkStringPtr> m_cameraVariableVectorNames;  // 0x30
		hkArray<hkVector4f> m_cameraVectorValues;          // 0x40
	};
	static_assert(sizeof(hkbCameraVariablesChangedCommand) == 0x50);
	static_assert(offsetof(hkbCameraVariablesChangedCommand, m_cameraVariableFloatNames) == 0x10);
	static_assert(offsetof(hkbCameraVariablesChangedCommand, m_cameraFloatValues) == 0x20);
	static_assert(offsetof(hkbCameraVariablesChangedCommand, m_cameraVariableVectorNames) == 0x30);
	static_assert(offsetof(hkbCameraVariablesChangedCommand, m_cameraVectorValues) == 0x40);
}
