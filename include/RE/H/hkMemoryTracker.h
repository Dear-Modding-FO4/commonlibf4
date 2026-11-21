#pragma once

namespace RE
{
	class __declspec(novtable) hkMemoryTracker
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryTracker };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryTracker };

		// add
		virtual void onNewReferencedObject();  // 0x0 [00] (char__unsigned___int64_void_)
		virtual void Unk_01();  // 0x8 [01]
		virtual void onNewObject();  // 0x10 [02] (char__unsigned___int64_void_)
		virtual void Unk_03();  // 0x18 [03]
		virtual void onNewRaw();  // 0x20 [04] (char__unsigned___int64_void_)
		virtual void Unk_05();  // 0x28 [05]
		virtual void addTypeDefinition();  // 0x30 [06] (hkMemoryTracker::TypeDefinition&)
		virtual void clearTypeDefinitions();  // 0x38 [07] (void)
		virtual void findTypeDefinition();  // 0x40 [08] (char_)
		virtual void Unk_09();  // 0x48 [09]
		virtual void getTypeDefinitions();  // 0x50 [0A] (hkMemoryTracker::TypeDefinition__)
		virtual void Unk_0B();  // 0x58 [0B]
	};
	static_assert(sizeof(hkMemoryTracker) == 0x8);
}
