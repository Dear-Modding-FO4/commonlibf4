#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCustomTestGeneratorComplexTypes.h"

namespace RE
{
	class hkbCustomIdSelector;
	class hkbGenerator;
	class hkbModifier;

	class __declspec(novtable) hkbCustomTestGeneratorNestedTypesBase :
		public hkbCustomTestGeneratorComplexTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorNestedTypesBase };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorNestedTypesBase };

		// members
		hkbGenerator* m_nestedTypeHkbGeneratorPtr;                                 // 0x180
		hkbGenerator* m_nestedTypeHkbGeneratorRefPtr;                              // 0x188
		hkbModifier* m_nestedTypeHkbModifierPtr;                                   // 0x190
		hkbModifier* m_nestedTypeHkbModifierRefPtr;                                // 0x198
		hkbCustomIdSelector* m_nestedTypeHkbCustomIdSelectorPtr;                   // 0x1A0
		hkbCustomIdSelector* m_nestedTypeHkbCustomIdSelectorRefPtr;                // 0x1A8
		hkArray<bool> m_nestedTypeArrayBool;                                       // 0x1B0
		hkArray<bool> m_nestedTypeArrayHkBool;                                     // 0x1C0
		hkArray<const char*> m_nestedTypeArrayCString;                             // 0x1D0
		hkArray<hkStringPtr> m_nestedTypeArrayHkStringPtr;                         // 0x1E0
		hkArray<std::int8_t> m_nestedTypeArrayHkInt8;                              // 0x1F0
		hkArray<std::int16_t> m_nestedTypeArrayHkInt16;                            // 0x200
		hkArray<std::int32_t> m_nestedTypeArrayHkInt32;                            // 0x210
		hkArray<std::uint8_t> m_nestedTypeArrayHkUint8;                            // 0x220
		hkArray<std::uint16_t> m_nestedTypeArrayHkUint16;                          // 0x230
		hkArray<std::uint32_t> m_nestedTypeArrayHkUint32;                          // 0x240
		hkArray<float> m_nestedTypeArrayHkReal;                                    // 0x250
		hkArray<hkbGenerator*> m_nestedTypeArrayHkbGeneratorPtr;                   // 0x260
		hkArray<hkbGenerator*> m_nestedTypeArrayHkbGeneratorRefPtr;                // 0x270
		hkArray<hkbModifier*> m_nestedTypeArrayHkbModifierPtr;                     // 0x280
		hkArray<hkbModifier*> m_nestedTypeArrayHkbModifierRefPtr;                  // 0x290
		hkArray<hkbCustomIdSelector*> m_nestedTypeArrayHkbCustomIdSelectorPtr;     // 0x2A0
		hkArray<hkbCustomIdSelector*> m_nestedTypeArrayHkbCustomIdSelectorRefPtr;  // 0x2B0
	};
	static_assert(sizeof(hkbCustomTestGeneratorNestedTypesBase) == 0x2C0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbGeneratorPtr) == 0x180);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbGeneratorRefPtr) == 0x188);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbModifierPtr) == 0x190);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbModifierRefPtr) == 0x198);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbCustomIdSelectorPtr) == 0x1A0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeHkbCustomIdSelectorRefPtr) == 0x1A8);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayBool) == 0x1B0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkBool) == 0x1C0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayCString) == 0x1D0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkStringPtr) == 0x1E0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkInt8) == 0x1F0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkInt16) == 0x200);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkInt32) == 0x210);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkUint8) == 0x220);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkUint16) == 0x230);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkUint32) == 0x240);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkReal) == 0x250);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbGeneratorPtr) == 0x260);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbGeneratorRefPtr) == 0x270);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbModifierPtr) == 0x280);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbModifierRefPtr) == 0x290);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbCustomIdSelectorPtr) == 0x2A0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypesBase, m_nestedTypeArrayHkbCustomIdSelectorRefPtr) == 0x2B0);
}
