#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpCharacterStateManager :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterStateManager };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterStateManager };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		void* unk20;  // 0x20
		void* unk28;  // 0x28
		void* unk30;  // 0x30
		void* unk38;  // 0x38
		void* unk40;  // 0x40
		void* unk48;  // 0x48
		void* unk50;  // 0x50
		void* unk58;  // 0x58
		void* unk60;  // 0x60
	};
	static_assert(sizeof(hknpCharacterStateManager) == 0x68);
	static_assert(offsetof(hknpCharacterStateManager, unk10) == 0x10);
	static_assert(offsetof(hknpCharacterStateManager, unk18) == 0x18);
	static_assert(offsetof(hknpCharacterStateManager, unk20) == 0x20);
	static_assert(offsetof(hknpCharacterStateManager, unk28) == 0x28);
	static_assert(offsetof(hknpCharacterStateManager, unk30) == 0x30);
	static_assert(offsetof(hknpCharacterStateManager, unk38) == 0x38);
	static_assert(offsetof(hknpCharacterStateManager, unk40) == 0x40);
	static_assert(offsetof(hknpCharacterStateManager, unk48) == 0x48);
	static_assert(offsetof(hknpCharacterStateManager, unk50) == 0x50);
	static_assert(offsetof(hknpCharacterStateManager, unk58) == 0x58);
	static_assert(offsetof(hknpCharacterStateManager, unk60) == 0x60);
}
