#pragma once

#include "RE/H/hkbGenerator.h"

namespace RE
{
	class __declspec(novtable) hkbProceduralBlenderGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbProceduralBlenderGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbProceduralBlenderGenerator };

		// add
		virtual void Unk_1E();  // 0xF0 [1E]
		virtual void Unk_1F();  // 0xF8 [1F]
		virtual void Unk_20();  // 0x100 [20]
		virtual void cleanup();  // 0x108 [21] (void)

		// members
		void* m_blender;  // 0x88
	};
	static_assert(sizeof(hkbProceduralBlenderGenerator) == 0x90);
	static_assert(offsetof(hkbProceduralBlenderGenerator, m_blender) == 0x88);
}
