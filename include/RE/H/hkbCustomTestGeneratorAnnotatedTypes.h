#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCustomTestGeneratorBoneTypes.h"

namespace RE
{
	class __declspec(novtable) hkbCustomTestGeneratorAnnotatedTypes :
		public hkbCustomTestGeneratorBoneTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorAnnotatedTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorAnnotatedTypes };

		// members
		const char* m_annotatedTypeCStringFilename;            // 0x5C0
		hkStringPtr m_annotatedTypeHkStringPtrFilename;        // 0x5C8
		const char* m_annotatedTypeCStringScript;              // 0x5D0
		hkStringPtr m_annotatedTypeHkStringPtrScript;          // 0x5D8
		const char* m_annotatedTypeCStringBoneAttachment;      // 0x5E0
		hkStringPtr m_annotatedTypeHkStringPtrBoneAttachment;  // 0x5E8
		const char* m_annotatedTypeCStringLocalFrame;          // 0x5F0
		hkStringPtr m_annotatedTypeHkStringPtrLocalFrame;      // 0x5F8
		bool m_annotatedHiddenTypeCopyStart;                   // 0x600
		std::uint8_t pad601[0x3];                              // 0x601
		std::int32_t m_annotatedTypeHkInt32EventID;            // 0x604
		std::int32_t m_annotatedTypeHkInt32VariableIndex;      // 0x608
		std::int32_t m_annotatedTypeHkInt32AttributeIndex;     // 0x60C
		float m_annotatedTypeHkRealTime;                       // 0x610
		bool m_annotatedTypeBoolNoVar;                         // 0x614
		bool m_annotatedTypeHkBoolNoVar;                       // 0x615
		std::int8_t m_annotatedTypeHkInt8NoVar;                // 0x616
		std::uint8_t pad617[0x1];                              // 0x617
		std::int16_t m_annotatedTypeHkInt16NoVar;              // 0x618
		std::uint8_t pad61A[0x2];                              // 0x61A
		std::int32_t m_annotatedTypeHkInt32NoVar;              // 0x61C
		std::uint8_t m_annotatedTypeHkUint8NoVar;              // 0x620
		std::uint8_t unk621[0x1];                              // 0x621
		std::uint16_t m_annotatedTypeHkUint16NoVar;            // 0x622
		std::uint32_t m_annotatedTypeHkUint32NoVar;            // 0x624
		float m_annotatedTypeHkRealNoVar;                      // 0x628
		bool m_annotatedTypeBoolOutput;                        // 0x62C
		bool m_annotatedTypeHkBoolOutput;                      // 0x62D
		std::int8_t m_annotatedTypeHkInt8Output;               // 0x62E
		std::uint8_t pad62F[0x1];                              // 0x62F
		std::int16_t m_annotatedTypeHkInt16Output;             // 0x630
		std::uint8_t pad632[0x2];                              // 0x632
		std::int32_t m_annotatedTypeHkInt32Output;             // 0x634
		std::uint8_t m_annotatedTypeHkUint8Output;             // 0x638
		std::uint8_t unk639[0x1];                              // 0x639
		std::uint16_t m_annotatedTypeHkUint16Output;           // 0x63A
		std::uint32_t m_annotatedTypeHkUint32Output;           // 0x63C
		float m_annotatedTypeHkRealOutput;                     // 0x640
		bool m_annotatedHiddenTypeBool;                        // 0x644
		bool m_annotatedHiddenTypeHkBool;                      // 0x645
		std::uint8_t pad646[0x2];                              // 0x646
		const char* m_annotatedHiddenTypeCString1;             // 0x648
		hkStringPtr m_annotatedHiddenTypeHkStringPtr1;         // 0x650
		const char* m_annotatedHiddenTypeCString2;             // 0x658
		hkStringPtr m_annotatedHiddenTypeHkStringPtr2;         // 0x660
		std::int8_t m_annotatedHiddenTypeHkInt8;               // 0x668
		std::uint8_t unk669[0x1];                              // 0x669
		std::int16_t m_annotatedHiddenTypeHkInt16;             // 0x66A
		std::int32_t m_annotatedHiddenTypeHkInt32;             // 0x66C
		std::uint8_t m_annotatedHiddenTypeHkUint8;             // 0x670
		std::uint8_t unk671[0x1];                              // 0x671
		std::uint16_t m_annotatedHiddenTypeHkUint16;           // 0x672
		std::uint32_t m_annotatedHiddenTypeHkUint32;           // 0x674
		bool m_annotatedHiddenTypeCopyEnd;                     // 0x678
	};
	static_assert(sizeof(hkbCustomTestGeneratorAnnotatedTypes) == 0x680);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeCStringFilename) == 0x5C0);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkStringPtrFilename) == 0x5C8);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeCStringScript) == 0x5D0);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkStringPtrScript) == 0x5D8);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeCStringBoneAttachment) == 0x5E0);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkStringPtrBoneAttachment) == 0x5E8);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeCStringLocalFrame) == 0x5F0);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkStringPtrLocalFrame) == 0x5F8);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeCopyStart) == 0x600);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt32EventID) == 0x604);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt32VariableIndex) == 0x608);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt32AttributeIndex) == 0x60C);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkRealTime) == 0x610);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeBoolNoVar) == 0x614);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkBoolNoVar) == 0x615);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt8NoVar) == 0x616);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt16NoVar) == 0x618);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt32NoVar) == 0x61C);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint8NoVar) == 0x620);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint16NoVar) == 0x622);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint32NoVar) == 0x624);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkRealNoVar) == 0x628);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeBoolOutput) == 0x62C);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkBoolOutput) == 0x62D);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt8Output) == 0x62E);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt16Output) == 0x630);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkInt32Output) == 0x634);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint8Output) == 0x638);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint16Output) == 0x63A);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkUint32Output) == 0x63C);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedTypeHkRealOutput) == 0x640);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeBool) == 0x644);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkBool) == 0x645);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeCString1) == 0x648);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkStringPtr1) == 0x650);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeCString2) == 0x658);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkStringPtr2) == 0x660);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkInt8) == 0x668);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkInt16) == 0x66A);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkInt32) == 0x66C);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkUint8) == 0x670);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkUint16) == 0x672);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeHkUint32) == 0x674);
	static_assert(offsetof(hkbCustomTestGeneratorAnnotatedTypes, m_annotatedHiddenTypeCopyEnd) == 0x678);
}
