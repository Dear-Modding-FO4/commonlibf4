#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpCharacterProxyListener :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterProxyListener };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterProxyListener };

		// add
		virtual void processConstraintsCallback();  // 0x20 [04] (_In_ const hknpCharacterProxy* proxy, const hkArray<hknpCharacterProxy::Contact>& manifold, hkSimplexSolverInput& input)
		virtual void contactAddedCallback();  // 0x28 [05] (_In_ const hknpCharacterProxy* proxy, const hknpCharacterProxy::Contact& contact)
		virtual void contactRemovedCallback();  // 0x30 [06] (_In_ const hknpCharacterProxy* proxy, const hknpCharacterProxy::Contact& contact)
		virtual void characterInteractionCallback();  // 0x38 [07] (hknpCharacterProxy__hknpCharacterProxy__hkContactPoint&)
		virtual void objectInteractionCallback();  // 0x40 [08] (_Inout_ hknpCharacterProxy* proxy, const hknpCharacterObjectInteractionEvent& input, hknpCharacterObjectInteractionResult& output)
		virtual void shapeChangedCallback();  // 0x48 [09] (_In_ const hknpCharacterProxy* proxy)
		virtual void characterCallback();  // 0x50 [0A] (_Inout_ hknpCharacterProxy* proxy)
		virtual void triggerVolumeInteractionCallback();  // 0x58 [0B] (_In_ const hknpCharacterProxy* proxy, const hknpCharacterProxy::TriggerInteraction& trigger, hknpTriggerEvent::Status status)
	};
	static_assert(sizeof(hknpCharacterProxyListener) == 0x10);
}
