#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"

namespace RE
{
	class hkClass;
	class hkClassMember;
	class hkRelocationInfo;

	class __declspec(novtable) hkObjectCopier :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkObjectCopier };
		inline static constexpr auto VTABLE{ VTABLE::hkObjectCopier };

		// add
		virtual hkResult copyObject(const void* a_dataIn, const hkClass& a_klassIn, hkStreamWriter* a_dataOut, const hkClass& a_klassOut, hkRelocationInfo& a_reloc);  // 0x20 [04]
		virtual std::int32_t areMembersCompatible(const hkClassMember& a_src, const hkClassMember& a_dst);  // 0x28 [05]
		virtual const hkClass* lookupClass(const hkClass& a_klass);  // 0x30 [06]

		// members
		std::uint32_t unk10;  // 0x10
		std::uint32_t unk14;  // 0x14
		std::uint32_t unk18;  // 0x18
		std::uint8_t unk1C;       // 0x1C
	};
	static_assert(sizeof(hkObjectCopier) == 0x20);
	static_assert(offsetof(hkObjectCopier, unk1C) == 0x1C);
	static_assert(offsetof(hkObjectCopier, unk10) == 0x10);
	static_assert(offsetof(hkObjectCopier, unk14) == 0x14);
	static_assert(offsetof(hkObjectCopier, unk18) == 0x18);
}
