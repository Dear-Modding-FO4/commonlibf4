#pragma once

#include "RE/B/BSBatchRenderer.h"
#include "REX/W32/NT.h"

namespace RE
{
	class TLS
	{
	public:
		[[nodiscard]] static TLS* GetSingleton()
		{
			return *static_cast<TLS**>(REX::W32::NtCurrentTeb()->threadLocalStoragePointer);
		}

		// members
		std::byte                       pad000[0x830];       // 0000
		bool                            consoleMode;         // 0830
		std::byte                       pad0831[0x18F];      // 0831
		std::int32_t                    memoryContext;       // 09C0
		std::byte                       pad09C4[0xB9C];      // 09C4
		bool                            alphaGroupZPrePass;  // 1560
		std::int32_t                    groupingAlphas;      // 1564
		BSBatchRenderer::GeometryGroup* currentAlphaGroup;   // 1568
	};
	static_assert(offsetof(TLS, memoryContext) == 0x9C0);
	static_assert(offsetof(TLS, alphaGroupZPrePass) == 0x1560);
	static_assert(offsetof(TLS, groupingAlphas) == 0x1564);
	static_assert(offsetof(TLS, currentAlphaGroup) == 0x1568);
}
