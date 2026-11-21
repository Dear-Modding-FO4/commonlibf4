#pragma once

namespace RE
{
	class __declspec(novtable) hknpCompressedMeshShapeCinfo
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompressedMeshShapeCinfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompressedMeshShapeCinfo };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
		virtual void Unk_08();  // 0x40 [08]

		// members
		std::uint32_t unk8;  // 0x8
		std::uint8_t unkC[0x4];  // 0xC
		float unk10;  // 0x10
		std::uint8_t unk14[0x4];  // 0x14
		float unk18;  // 0x18
		std::uint32_t unk1C;  // 0x1C
		std::uint16_t unk20;  // 0x20
		std::uint8_t pad22[0x6];  // 0x22
		void* unk28;  // 0x28
		void* unk30;  // 0x30
	};
	static_assert(sizeof(hknpCompressedMeshShapeCinfo) == 0x38);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk8) == 0x8);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unkC) == 0xC);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk10) == 0x10);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk14) == 0x14);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk18) == 0x18);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk1C) == 0x1C);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk20) == 0x20);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, pad22) == 0x22);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk28) == 0x28);
	static_assert(offsetof(hknpCompressedMeshShapeCinfo, unk30) == 0x30);
}
