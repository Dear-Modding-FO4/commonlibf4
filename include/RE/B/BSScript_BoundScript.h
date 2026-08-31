#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	namespace BSScript
	{
		class BoundScript :
			public BSIntrusiveRefCounted  // 00
		{
		public:
			BoundScript() = delete;
			BoundScript(const BoundScript&) = delete;
			BoundScript(BoundScript&&) = delete;

			~BoundScript()
			{
				using func_t = void (*)(BoundScript*);
				static REL::Relocation<func_t> func{ ID::BSScript_BoundScript::ClearProperties };
				func(this);
			}

			BoundScript& operator=(const BoundScript&) = delete;
			BoundScript& operator=(BoundScript&&) = delete;

			F4_HEAP_REDEFINE_NEW(BoundScript);

			// members
			std::uint32_t pad04;                  // 04
			BSFixedString scriptName;             // 08
			std::uint32_t propertyCountAndFlags;  // 10
			std::uint32_t pad14;                  // 14
			std::byte     properties[0];          // 18
		};
		static_assert(sizeof(BoundScript) == 0x18);
	}
}
