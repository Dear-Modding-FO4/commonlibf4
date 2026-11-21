#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbBindable.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbNode :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNode };
		inline static constexpr auto VTABLE{ VTABLE::hkbNode };

		// add
		virtual void activate();  // 0x38 [07] (hkbContext&)
		virtual void update();  // 0x40 [08] (hkbContext&_float)
		virtual void handleEvent();  // 0x48 [09] (hkbContext&_hkbEvent)
		virtual void deactivate();  // 0x50 [0A] (hkbContext&)
		virtual void getMaxNumChildren();  // 0x58 [0B] (int)
		virtual void getChildren();  // 0x60 [0C] (int_hkbNode::ChildrenInfo&)
		virtual void isValid();  // 0x68 [0D] (hkbCharacter__hkStringPtr&)
		virtual void precompute();  // 0x70 [0E] (hkbContext&)
		virtual void cloneNode();  // 0x78 [0F] (hkbBehaviorGraph&)
		virtual void createInternalState();  // 0x80 [10] (void)
		virtual void getInternalState();  // 0x88 [11] (hkReferencedObject&)
		virtual void getInternalStateUser();  // 0x90 [12] (hkbBehaviorGraph&_hkReferencedObject&)
		virtual void setInternalState();  // 0x98 [13] (hkReferencedObject&)
		virtual void Unk_14();  // 0xA0 [14]
		virtual void getActiveEvents();  // 0xA8 [15] (hkPointerMap_int_bool_hkContainerHeapAllocator_&)
		virtual void Unk_16();  // 0xB0 [16]

		enum class GetChildrenFlagBits : std::uint32_t
		{
			kFlagActiveOnly = 1,
			kFlagGeneratorsOnly = 4,
			kFlagIgnoreReferencedBehaviors = 8
		};

		enum class CloneState : std::uint8_t
		{
			kCloneStateDefault = 0,
			kCloneStateTemplate = 1,
			kCloneStateClone = 2
		};

		enum class TemplateOrClone : std::uint32_t
		{
			kNodeIsTemplate = 0,
			kNodeIsClone = 1
		};

		// members
		std::uint64_t m_userData;  // 0x30
		hkStringPtr m_name;        // 0x38
		std::uint16_t m_id;        // 0x40
		hkEnum<CloneState, std::int8_t> m_cloneState;  // 0x42
		std::uint8_t m_type;       // 0x43
		std::uint8_t pad44[0x4];   // 0x44
		void* m_nodeInfo;          // 0x48
	};
	static_assert(sizeof(hkbNode) == 0x50);
	static_assert(offsetof(hkbNode, m_userData) == 0x30);
	static_assert(offsetof(hkbNode, m_name) == 0x38);
	static_assert(offsetof(hkbNode, m_id) == 0x40);
	static_assert(offsetof(hkbNode, m_cloneState) == 0x42);
	static_assert(offsetof(hkbNode, m_type) == 0x43);
	static_assert(offsetof(hkbNode, m_nodeInfo) == 0x48);
}
