#include "RE/P/ProcessLists.h"

#include "RE/A/Actor.h"

namespace RE
{
	void ProcessLists::ForEachHighActor(std::function<BSContainer::ForEachResult(Actor*)> a_callback)
	{
		for (const auto& handle : highActorHandles) {
			if (auto actor = handle.get(); actor && a_callback(actor.get()) == BSContainer::ForEachResult::kStop) {
				break;
			}
		}
	}
}
