#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkResource;

	class __declspec(novtable) hkLoader :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkLoader };
		inline static constexpr auto VTABLE{ VTABLE::hkLoader };

		// add
		virtual void load();  // 0x20 [04] (hkStreamReader__hkClass&_hkTypeInfoRegistry_)
		virtual void load_05();  // 0x28 [05] (char__hkClass&_hkTypeInfoRegistry_)
		virtual void load_06();  // 0x30 [06] (hkStreamReader__hkClass&)
		virtual void load_07();  // 0x38 [07] (char__hkClass&)
		virtual void Unk_08();  // 0x40 [08]
		virtual void Unk_09();  // 0x48 [09]
		virtual void load_0A();  // 0x50 [0A] (hkStreamReader_)
		virtual void load_0B();  // 0x58 [0B] (char_)

		// members
		hkArray<hkResource*> m_loadedData;  // 0x10
	};
	static_assert(sizeof(hkLoader) == 0x20);
	static_assert(offsetof(hkLoader, m_loadedData) == 0x10);
}
