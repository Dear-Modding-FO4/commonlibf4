#pragma once

namespace RE
{
	class __declspec(novtable) BSIRagdollDriver
	{
	public:
		static constexpr auto RTTI{ RTTI::BSIRagdollDriver };
		static constexpr auto VTABLE{ VTABLE::BSIRagdollDriver };

		BSIRagdollDriver() = delete;
		virtual ~BSIRagdollDriver();          // 00
		virtual bool HasRagdoll() const = 0;  // 01
	};
	static_assert(sizeof(BSIRagdollDriver) == 0x8);
}
