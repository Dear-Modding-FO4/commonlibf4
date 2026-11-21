#pragma once

namespace RE
{
	class __declspec(novtable) hknpSimulation
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSimulation };
		inline static constexpr auto VTABLE{ VTABLE::hknpSimulation };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void collide();  // 0x8 [01] (hknpSimulationContext&_hknpSolverData_&)
		virtual void solve();  // 0x10 [02] (hknpSimulationContext&_hknpSolverData_)
		virtual void Unk_03();  // 0x18 [03]
	};
	static_assert(sizeof(hknpSimulation) == 0x8);
}
