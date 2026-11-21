#pragma once

namespace RE
{
	class __declspec(novtable) hknpBroadPhase
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBroadPhase };
		inline static constexpr auto VTABLE{ VTABLE::hknpBroadPhase };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void addBodies();  // 0x8 [01] (hknpBodyId__int_hknpBody_)
		virtual void removeBodies();  // 0x10 [02] (hknpBodyId__int_hknpBody_)
		virtual void Unk_03();  // 0x18 [03]
		virtual void update();  // 0x20 [04] (hknpBody__hknpBroadPhase::UpdateMode)
		virtual void optimize();  // 0x28 [05] (hknpBody_)
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
		virtual void Unk_08();  // 0x40 [08]
		virtual void Unk_09();  // 0x48 [09]
		virtual void Unk_0A();  // 0x50 [0A]
		virtual void Unk_0B();  // 0x58 [0B]
		virtual void Unk_0C();  // 0x60 [0C]
		virtual void Unk_0D();  // 0x68 [0D]
		virtual void Unk_0E();  // 0x70 [0E]
		virtual void Unk_0F();  // 0x78 [0F]
	};
	static_assert(sizeof(hknpBroadPhase) == 0x8);
}
