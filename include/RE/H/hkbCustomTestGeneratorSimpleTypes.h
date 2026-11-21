#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCustomTestGeneratorHiddenTypes.h"

namespace RE
{
	class __declspec(novtable) hkbCustomTestGeneratorSimpleTypes :
		public hkbCustomTestGeneratorHiddenTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorSimpleTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorSimpleTypes };

		// members
		std::int64_t m_simpleTypeHkInt64;           // 0x98
		std::uint64_t m_simpleTypeHkUint64;         // 0xA0
		bool m_simpleHiddenTypeCopyStart;           // 0xA8
		bool m_simpleTypeBool;                      // 0xA9
		bool m_simpleTypeHkBool;                    // 0xAA
		std::uint8_t padAB[0x5];                    // 0xAB
		const char* m_simpleTypeCString;            // 0xB0
		hkStringPtr m_simpleTypeHkStringPtr;        // 0xB8
		std::int8_t m_simpleTypeHkInt8;             // 0xC0
		std::uint8_t unkC1[0x1];                    // 0xC1
		std::int16_t m_simpleTypeHkInt16;           // 0xC2
		std::int32_t m_simpleTypeHkInt32;           // 0xC4
		std::uint8_t m_simpleTypeHkUint8;           // 0xC8
		std::uint8_t unkC9[0x1];                    // 0xC9
		std::uint16_t m_simpleTypeHkUint16;         // 0xCA
		std::uint32_t m_simpleTypeHkUint32;         // 0xCC
		float m_simpleTypeHkReal;                   // 0xD0
		std::int8_t m_simpleTypeHkInt8Default;      // 0xD4
		std::uint8_t unkD5[0x1];                    // 0xD5
		std::int16_t m_simpleTypeHkInt16Default;    // 0xD6
		std::int32_t m_simpleTypeHkInt32Default;    // 0xD8
		std::uint8_t m_simpleTypeHkUint8Default;    // 0xDC
		std::uint8_t unkDD[0x1];                    // 0xDD
		std::uint16_t m_simpleTypeHkUint16Default;  // 0xDE
		std::uint32_t m_simpleTypeHkUint32Default;  // 0xE0
		float m_simpleTypeHkRealDefault;            // 0xE4
		std::int8_t m_simpleTypeHkInt8Clamp;        // 0xE8
		std::uint8_t unkE9[0x1];                    // 0xE9
		std::int16_t m_simpleTypeHkInt16Clamp;      // 0xEA
		std::int32_t m_simpleTypeHkInt32Clamp;      // 0xEC
		std::uint8_t m_simpleTypeHkUint8Clamp;      // 0xF0
		std::uint8_t unkF1[0x1];                    // 0xF1
		std::uint16_t m_simpleTypeHkUint16Clamp;    // 0xF2
		std::uint32_t m_simpleTypeHkUint32Clamp;    // 0xF4
		float m_simpleTypeHkRealClamp;              // 0xF8
		bool m_simpleHiddenTypeCopyEnd;             // 0xFC
	};
	static_assert(sizeof(hkbCustomTestGeneratorSimpleTypes) == 0x100);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt64) == 0x98);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint64) == 0xA0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleHiddenTypeCopyStart) == 0xA8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeBool) == 0xA9);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkBool) == 0xAA);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeCString) == 0xB0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkStringPtr) == 0xB8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt8) == 0xC0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt16) == 0xC2);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt32) == 0xC4);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint8) == 0xC8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint16) == 0xCA);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint32) == 0xCC);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkReal) == 0xD0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt8Default) == 0xD4);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt16Default) == 0xD6);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt32Default) == 0xD8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint8Default) == 0xDC);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint16Default) == 0xDE);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint32Default) == 0xE0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkRealDefault) == 0xE4);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt8Clamp) == 0xE8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt16Clamp) == 0xEA);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkInt32Clamp) == 0xEC);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint8Clamp) == 0xF0);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint16Clamp) == 0xF2);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkUint32Clamp) == 0xF4);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleTypeHkRealClamp) == 0xF8);
	static_assert(offsetof(hkbCustomTestGeneratorSimpleTypes, m_simpleHiddenTypeCopyEnd) == 0xFC);
}
