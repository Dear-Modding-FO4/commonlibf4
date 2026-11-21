#pragma once

#include "RE/H/hkTask.h"

namespace RE
{
	class __declspec(novtable) hknpHBPUpdateDirtyBodiesTask :
		public hkTask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpHBPUpdateDirtyBodiesTask };
		inline static constexpr auto VTABLE{ VTABLE::hknpHBPUpdateDirtyBodiesTask };

		// members
		void* unk10;              // 0x10
		std::uint8_t unk18[0x8];  // 0x18
	};
	static_assert(sizeof(hknpHBPUpdateDirtyBodiesTask) == 0x20);
	static_assert(offsetof(hknpHBPUpdateDirtyBodiesTask, unk10) == 0x10);
}
