#pragma once

namespace RE
{
	class __declspec(novtable) hkaNpRagdollRaycastInterface
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaNpRagdollRaycastInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkaNpRagdollRaycastInterface };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void castRay();  // 0x8 [01] (hkVector4f&_hkVector4f&_hkVector4f&_hkVector4f&)
	};
	static_assert(sizeof(hkaNpRagdollRaycastInterface) == 0x8);
}
