#pragma once

#include <vector>

#include "RE/B/BSAnimationGraphVariableCache.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/B/BSTTuple.h"
#include "RE/B/BShkbAnimationGraph.h"

namespace RE
{
	class BSAnimationGraphChannel;
	class BShkbAnimationGraph;
	class BSAnimationGraphEvent;

	class BSAnimationGraphManager :
		public BSTEventSink<BSAnimationGraphEvent>,  //00
		public BSIntrusiveRefCounted                 //08
	{
	public:
		// Ragdoll availability, including the keyframed bodies of an animated actor.
		[[nodiscard]] bool HasRagdoll() const
		{
			// The engine inlines this visitor on NG/AE. The graph predicate is slot 1 on all runtimes.
			BSAutoLock guard{ updateLock };
			for (const auto& entry : graph) {
				if (auto* animationGraph = entry.get()) {
					if (animationGraph->HasRagdoll()) {
						return true;
					}
				}
			}
			return false;
		}

		// Retain systems under the graph lock. World/body access still requires the physics lock.
		[[nodiscard]] std::vector<hkRefPtr<hknpRagdoll>> GetRagdolls() const
		{
			BSAutoLock                         guard{ updateLock };
			std::vector<hkRefPtr<hknpRagdoll>> result;
			for (const auto& entry : graph) {
				if (entry) {
					if (auto* ragdoll = entry->GetRagdoll()) {
						result.emplace_back(ragdoll);
					}
				}
			}
			return result;
		}

		class DependentManagerSmartPtr
		{
		public:
			// members
			std::uint64_t ptrAndFlagsStorage;  // 00
		};
		static_assert(sizeof(DependentManagerSmartPtr) == 0x08);

		// members
		BSTArray<BSTSmartPointer<BSAnimationGraphChannel>>     boundChannel;          // 10
		BSTArray<BSTSmartPointer<BSAnimationGraphChannel>>     bumpedChannel;         // 28
		BSTSmallArray<BSTSmartPointer<BShkbAnimationGraph>, 1> graph;                 // 40
		BSTArray<DependentManagerSmartPtr>                     subManagers;           // 58
		BSTArray<BSTTuple<BSFixedString, BSFixedString>>       eventQueuea;           // 70
		BSAnimationGraphVariableCache                          variableCache;         // 88
		mutable BSSpinLock                                     updateLock;            // C8
		BSSpinLock                                             dependentManagerLock;  // D0
		std::uint32_t                                          activeGraph;           // D8
		std::uint32_t                                          generateDepth;         // DC
	};
	static_assert(offsetof(BSAnimationGraphManager, graph) == 0x40);
	static_assert(offsetof(BSAnimationGraphManager, updateLock) == 0xC8);
	static_assert(sizeof(BSAnimationGraphManager) == 0xE0);
	using BSAnimationGraphManagerPtr = BSTSmartPointer<BSAnimationGraphManager>;
}
