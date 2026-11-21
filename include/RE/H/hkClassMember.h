#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkFlags.h"

namespace RE
{
	class hkClassEnum;

	class hkClassMember
	{
	public:

		enum class Type : std::int8_t
		{
			kTypeVoid = 0,
			kTypeBool = 1,
			kTypeChar = 2,
			kTypeInt8 = 3,
			kTypeUint8 = 4,
			kTypeInt16 = 5,
			kTypeUint16 = 6,
			kTypeInt32 = 7,
			kTypeUint32 = 8,
			kTypeInt64 = 9,
			kTypeUint64 = 10,
			kTypeReal = 11,
			kTypeVector4 = 12,
			kTypeQuaternion = 13,
			kTypeMatrix3 = 14,
			kTypeRotation = 15,
			kTypeQstransform = 16,
			kTypeMatrix4 = 17,
			kTypeTransform = 18,
			kTypeZero = 19,
			kTypePointer = 20,
			kTypeFunctionpointer = 21,
			kTypeArray = 22,
			kTypeInplacearray = 23,
			kTypeEnum = 24,
			kTypeStruct = 25,
			kTypeSimplearray = 26,
			kTypeHomogeneousarray = 27,
			kTypeVariant = 28,
			kTypeCstring = 29,
			kTypeUlong = 30,
			kTypeFlags = 31,
			kTypeMax = 32
		};

		enum class Flags : std::uint16_t
		{
			kPointerOptional = 1,
			kPointerVoidstar = 2,
			kEnum8 = 8,
			kEnum16 = 16,
			kEnum32 = 32,
			kArrayRawdata = 64
		};

		enum class Range : std::uint32_t
		{
			kInvalid = 0,
			kDefault = 1,
			kAbsMin = 2,
			kAbsMax = 4,
			kSoftMin = 8,
			kSoftMax = 16,
			kRangeMax = 32
		};

		// members
		const char* m_name;                   // 0x00
		void* m_class;                        // 0x08
		hkClassEnum* m_enum;                  // 0x10
		hkEnum<Type, std::int8_t> m_type;     // 0x18
		hkEnum<Type, std::int8_t> m_subtype;  // 0x19
		std::int16_t m_cArraySize;            // 0x1A
		hkFlags<Flags, std::uint16_t> m_flags;                // 0x1C
		std::uint16_t m_offset;               // 0x1E
	};
	static_assert(sizeof(hkClassMember) == 0x20);
	static_assert(offsetof(hkClassMember, m_name) == 0x0);
	static_assert(offsetof(hkClassMember, m_class) == 0x8);
	static_assert(offsetof(hkClassMember, m_enum) == 0x10);
	static_assert(offsetof(hkClassMember, m_type) == 0x18);
	static_assert(offsetof(hkClassMember, m_subtype) == 0x19);
	static_assert(offsetof(hkClassMember, m_cArraySize) == 0x1A);
	static_assert(offsetof(hkClassMember, m_flags) == 0x1C);
	static_assert(offsetof(hkClassMember, m_offset) == 0x1E);
}
