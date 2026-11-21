#pragma once

namespace RE
{
	class __declspec(novtable) hknpStreamContactSolverTypes
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpStreamContactSolverTypes };

		// add
		virtual void Unk_00();  // 0x0 [00]
	};
	static_assert(sizeof(hknpStreamContactSolverTypes) == 0x8);
}
