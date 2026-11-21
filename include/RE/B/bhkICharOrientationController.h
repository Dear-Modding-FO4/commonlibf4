#pragma once

namespace RE
{
	class __declspec(novtable) bhkICharOrientationController
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkICharOrientationController };
		inline static constexpr auto VTABLE{ VTABLE::bhkICharOrientationController };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]
		virtual void AdjustCastBasedOnSupportImpl();  // 0x20 [04] (bhkCharacterController&_hkVector4f&_hkVector4f&)
		virtual void AdjustMovingBumpedObjectImpl();  // 0x28 [05] (bhkCharacterController&_hkVector4f&_float_hkVector4f&)
		virtual void ApplyRotationForBumpedCharacterImpl();  // 0x30 [06] (bhkCharacterController&_hkContactPoint&_bhkCharacterController&)
		virtual void Unk_07();  // 0x38 [07]
		virtual void CalculatePitchAndRollImpl();  // 0x40 [08] (bhkCharacterController&)
		virtual void Unk_09();  // 0x48 [09]
		virtual void Unk_0A();  // 0x50 [0A]
		virtual void Unk_0B();  // 0x58 [0B]
		virtual void Unk_0C();  // 0x60 [0C]
		virtual void Unk_0D();  // 0x68 [0D]
		virtual void Unk_0E();  // 0x70 [0E]
	};
	static_assert(sizeof(bhkICharOrientationController) == 0x8);
}
