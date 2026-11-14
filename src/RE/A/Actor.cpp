#include "RE/A/Actor.h"

#include "RE/B/BSAnimationGraphManager.h"
#include "RE/F/FindTriangleForLocationTraversableFilter.h"
#include "RE/P/Pathing.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESNPC.h"

namespace RE
{
	bool Actor::IsInRagdollState() const
	{
		BSAnimationGraphManagerPtr manager;
		return GetAnimationGraphManager(manager) && manager && manager->HasRagdoll();
	}

	bool Actor::MoveToNearestNavmesh()
	{
		auto* pathing = Pathing::GetSingleton();
		if (!pathing) {
			return false;
		}
		auto                                     location = pathing->MakePathingLocation(this);
		FindTriangleForLocationTraversableFilter filter{ 1, 0.0F, 64.0F };
		if (!location.ResolveToClosestNavmeshAndTriangle(filter)) {
			return false;
		}
		ObjectRefHandle target;
		MoveToImpl(target, GetParentCell(), GetWorldSpace(), location.location, data.angle);
		return true;
	}

	TESNPC* Actor::GetNPC() const noexcept
	{
		const auto objRef = GetObjectReference();
		assert(objRef->GetFormType() == ENUM_FORM_ID::kNPC_);
		return static_cast<TESNPC*>(objRef);
	}
}
