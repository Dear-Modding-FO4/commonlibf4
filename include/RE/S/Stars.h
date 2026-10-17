#pragma once

namespace RE
{
	class __declspec(novtable) Stars :
		public SkyObject
	{
	public:
		static constexpr auto RTTI{ RTTI::Stars };
		static constexpr auto VTABLE{ VTABLE::Stars };

		virtual ~Stars();

		// members
		NiPointer<NiNode>              starsNode;         // 10
		float                          alpha;             // 18
	};
	static_assert(sizeof(Stars) == 0x20);
}
