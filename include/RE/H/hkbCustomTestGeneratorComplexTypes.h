#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbCustomTestGeneratorSimpleTypes.h"

namespace RE
{
	class hkReferencedObject;

	class __declspec(novtable) hkbCustomTestGeneratorComplexTypes :
		public hkbCustomTestGeneratorSimpleTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorComplexTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorComplexTypes };

		enum class CustomEnum : std::uint32_t
		{
			kCustomEnumAla = 0,
			kCustomEnumDepeche = 1,
			kCustomEnumFurious = 5
		};

		enum class CustomFlag : std::uint32_t
		{
			kCustomFlagNone = 0,
			kCustomFlagUno = 1,
			kCustomFlagZwei = 2,
			kCustomFlagShiOrYon = 4,
			kCustomFlagLotsOBits = 240
		};

		// members
		hkReferencedObject* m_complexTypeHkObjectPtr;          // 0x100
		bool m_complexHiddenTypeCopyStart;                     // 0x108
		std::uint8_t pad109[0x7];                              // 0x109
		hkQuaternionf m_complexTypeHkQuaternion;               // 0x110
		hkVector4f m_complexTypeHkVector4;                     // 0x120
		std::int8_t m_complexTypeEnumHkInt8;                   // 0x130
		std::uint8_t unk131[0x1];                              // 0x131
		std::int16_t m_complexTypeEnumHkInt16;                 // 0x132
		std::int32_t m_complexTypeEnumHkInt32;                 // 0x134
		std::uint8_t m_complexTypeEnumHkUint8;                 // 0x138
		std::uint8_t unk139[0x1];                              // 0x139
		std::uint16_t m_complexTypeEnumHkUint16;               // 0x13A
		std::uint32_t m_complexTypeEnumHkUint32;               // 0x13C
		std::int8_t m_complexTypeEnumHkInt8InvalidCheck;       // 0x140
		std::uint8_t unk141[0x1];                              // 0x141
		std::int16_t m_complexTypeEnumHkInt16InvalidCheck;     // 0x142
		std::int32_t m_complexTypeEnumHkInt32InvalidCheck;     // 0x144
		std::uint8_t m_complexTypeEnumHkUint8InvalidCheck;     // 0x148
		std::uint8_t unk149[0x1];                              // 0x149
		std::uint16_t m_complexTypeEnumHkUint16InvalidCheck;   // 0x14A
		std::uint32_t m_complexTypeEnumHkUint32InvalidCheck;   // 0x14C
		std::int8_t m_complexTypeFlagsHkInt8;                  // 0x150
		std::uint8_t unk151[0x1];                              // 0x151
		std::int16_t m_complexTypeFlagsHkInt16;                // 0x152
		std::int32_t m_complexTypeFlagsHkInt32;                // 0x154
		std::uint8_t m_complexTypeFlagsHkUint8;                // 0x158
		std::uint8_t unk159[0x1];                              // 0x159
		std::uint16_t m_complexTypeFlagsHkUint16;              // 0x15A
		std::uint32_t m_complexTypeFlagsHkUint32;              // 0x15C
		std::int8_t m_complexTypeFlagsHkInt8InvalidCheck;      // 0x160
		std::uint8_t unk161[0x1];                              // 0x161
		std::int16_t m_complexTypeFlagsHkInt16InvalidCheck;    // 0x162
		std::int32_t m_complexTypeFlagsHkInt32InvalidCheck;    // 0x164
		std::uint8_t m_complexTypeFlagsHkUint8InvalidCheck;    // 0x168
		std::uint8_t unk169[0x1];                              // 0x169
		std::uint16_t m_complexTypeFlagsHkUint16InvalidCheck;  // 0x16A
		std::uint32_t m_complexTypeFlagsHkUint32InvalidCheck;  // 0x16C
		bool m_complexHiddenTypeCopyEnd;                       // 0x170
	};
	static_assert(sizeof(hkbCustomTestGeneratorComplexTypes) == 0x180);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeHkObjectPtr) == 0x100);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexHiddenTypeCopyStart) == 0x108);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeHkQuaternion) == 0x110);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeHkVector4) == 0x120);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt8) == 0x130);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt16) == 0x132);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt32) == 0x134);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint8) == 0x138);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint16) == 0x13A);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint32) == 0x13C);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt8InvalidCheck) == 0x140);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt16InvalidCheck) == 0x142);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkInt32InvalidCheck) == 0x144);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint8InvalidCheck) == 0x148);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint16InvalidCheck) == 0x14A);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeEnumHkUint32InvalidCheck) == 0x14C);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt8) == 0x150);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt16) == 0x152);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt32) == 0x154);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint8) == 0x158);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint16) == 0x15A);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint32) == 0x15C);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt8InvalidCheck) == 0x160);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt16InvalidCheck) == 0x162);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkInt32InvalidCheck) == 0x164);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint8InvalidCheck) == 0x168);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint16InvalidCheck) == 0x16A);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexTypeFlagsHkUint32InvalidCheck) == 0x16C);
	static_assert(offsetof(hkbCustomTestGeneratorComplexTypes, m_complexHiddenTypeCopyEnd) == 0x170);
}
