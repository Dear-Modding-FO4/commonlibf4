#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkVtableClassRegistry.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class hkClass;
	class hkPackfileWriter_AddObjectListener;
	class hkPackfileWriter_Options;

	class __declspec(novtable) hkPackfileWriter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkPackfileWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkPackfileWriter };

		// add
		virtual void setContentsWithRegistry(const void* a_pointer, const hkClass& a_klass, const hkVtableClassRegistry* a_classRegistry, hkPackfileWriter_AddObjectListener* a_addListener);  // 0x20 [04]
		virtual void setContents(const void* a_object, const hkClass& a_klass, hkPackfileWriter_AddObjectListener* a_addListen);  // 0x28 [05]
		virtual void addImport(const void* a_object, const char* a_id);  // 0x30 [06]
		virtual void addExport(const void* a_object, const char* a_id);  // 0x38 [07]
		virtual hkResult save(hkStreamWriter* a_a_arg1, const hkPackfileWriter_Options* a_a_arg2);  // 0x40 [08]
		virtual void addSection(const char* a_sectionTag);  // 0x48 [09]
		virtual void setSectionForPointer(const void* a_ptr, const char* a_sectionTag);  // 0x50 [0A]
		virtual void setSectionForClass(const hkClass& a_k, const char* a_sectionTag);  // 0x58 [0B]

		// members
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint8_t unk20[0x90];  // 0x20
		std::uint32_t unkB0;       // 0xB0
		std::uint32_t unkB4;       // 0xB4
		std::uint8_t unkB8[0x30];  // 0xB8
		hkArray<std::uint8_t> unkE8;  // 0xE8
		std::uint8_t unkF8[0x40];  // 0xF8
	};
	static_assert(sizeof(hkPackfileWriter) == 0x138);
	static_assert(offsetof(hkPackfileWriter, unkB0) == 0xB0);
	static_assert(offsetof(hkPackfileWriter, unkB4) == 0xB4);
	static_assert(offsetof(hkPackfileWriter, unk10) == 0x10);
	static_assert(offsetof(hkPackfileWriter, unk20) == 0x20);
	static_assert(offsetof(hkPackfileWriter, unkB8) == 0xB8);
	static_assert(offsetof(hkPackfileWriter, unkE8) == 0xE8);
	static_assert(offsetof(hkPackfileWriter, unkF8) == 0xF8);
}
