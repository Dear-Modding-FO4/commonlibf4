#pragma once

#include "RE/B/BSIRagdollDriver.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkbRagdollInterface.h"
#include "RE/H/hknpRagdoll.h"

namespace RE
{
	class __declspec(novtable) BShkbAnimationGraph :
		public BSIntrusiveRefCounted,  // 008
		public BSIRagdollDriver        // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BShkbAnimationGraph };
		static constexpr auto VTABLE{ VTABLE::BShkbAnimationGraph };

		BShkbAnimationGraph() = delete;
		virtual ~BShkbAnimationGraph() override;   // 00
		virtual bool HasRagdoll() const override;  // 01

		// Caller must synchronize access with the graph manager's updateLock.
		[[nodiscard]] hknpRagdoll* GetRagdoll() const;

		// members
		std::byte                     unk00C[0x204];     // 00C
		hkRefPtr<hkbRagdollInterface> ragdollInterface;  // 210
		std::byte                     unk218[0x1B8];     // 218
	};
	static_assert(offsetof(BShkbAnimationGraph, refCount) == 0x8);
	static_assert(offsetof(BShkbAnimationGraph, ragdollInterface) == 0x210);
	static_assert(sizeof(BShkbAnimationGraph) == 0x3D0);
}
