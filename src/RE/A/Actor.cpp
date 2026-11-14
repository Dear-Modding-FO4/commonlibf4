#include "RE/A/Actor.h"

#include "RE/B/BSAnimationGraphManager.h"
#include "RE/F/FindTriangleForLocationTraversableFilter.h"
#include "RE/H/hknpBSWorld.h"
#include "RE/P/Pathing.h"
#include "RE/RTTI.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESNPC.h"

namespace RE
{
	bool Actor::IsInRagdollState() const
	{
		BSAnimationGraphManagerPtr manager;
		if (!GetAnimationGraphManager(manager) || !manager) {
			return false;
		}

		// Release the graph lock before acquiring any physics-world lock.
		for (const auto& ragdoll : manager->GetRagdolls()) {
			hkRefPtr<hknpWorld> world{ ragdoll->m_world };
			auto*               physicsWorld = fallout_cast<hknpBSWorld*>(world.get());
			if (!physicsWorld) {
				continue;
			}

			BSAutoReadLock guard{ physicsWorld->m_worldLock };
			if (ragdoll->m_world.get() != world.get()) {
				continue;
			}
			for (const auto bodyID : ragdoll->m_bodyIds) {
				const auto* body = physicsWorld->GetBody(bodyID);
				// Keyframed bodies also carry kIsDynamic; ordinary animated actors use them.
				if (body && body->m_flags.any(hknpCollisionFlags::kIsDynamic) &&
					!body->m_flags.any(hknpCollisionFlags::kIsKeyframed)) {
					return true;
				}
			}
		}
		return false;
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
