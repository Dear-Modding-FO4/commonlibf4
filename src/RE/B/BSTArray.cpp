#include "RE/B/BSTArray.h"

#include "RE/B/BSScript_BoundScript.h"
#include "RE/B/BSScript_Internal_AttachedScript.h"
#include "RE/G/GameScript.h"

namespace RE
{
	template class BSTAlignedHeapArrayAllocator<0x10>::Allocator;
	static_assert(sizeof(BSTAlignedHeapArrayAllocator<0x10>::Allocator) == 0x10);
	static_assert(requires(void* a_ptr) { BSScript::Object::operator delete(a_ptr); });

	template class BSTSmallSharedArray<BSScript::Internal::AttachedScript>;
	template class BSTSmallSharedArray<BSTSmartPointer<BSScript::BoundScript>>;
	template class BSTSmallSharedArray<GameScript::ObjectBindPolicy::QueuedObject>;
}
