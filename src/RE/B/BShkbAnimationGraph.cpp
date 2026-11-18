#include "RE/B/BShkbAnimationGraph.h"

#include "RE/H/hkbnpRagdollInterface.h"
#include "RE/RTTI.h"

namespace RE
{
	hknpRagdoll* BShkbAnimationGraph::GetRagdoll() const
	{
		auto* interface = fallout_cast<hkbnpRagdollInterface*>(ragdollInterface.get());
		return interface ? interface->ragdoll.get() : nullptr;
	}
}
