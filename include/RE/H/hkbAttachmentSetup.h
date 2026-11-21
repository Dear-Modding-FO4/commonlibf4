#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbAttachmentSetup :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAttachmentSetup };
		inline static constexpr auto VTABLE{ VTABLE::hkbAttachmentSetup };

		enum class AttachmentType : std::uint8_t
		{
			kAttachmentTypeKeyframeRigidBody = 0,
			kAttachmentTypeBallSocketConstraint = 1,
			kAttachmentTypeRagdollConstraint = 2,
			kAttachmentTypeSetWorldFromModel = 3,
			kAttachmentTypeNone = 4
		};

		// members
		float m_blendInTime;            // 0x10
		float m_moveAttacherFraction;   // 0x14
		float m_gain;                   // 0x18
		float m_extrapolationTimeStep;  // 0x1C
		float m_fixUpGain;              // 0x20
		float m_maxLinearDistance;      // 0x24
		float m_maxAngularDistance;     // 0x28
		hkEnum<AttachmentType, std::int8_t> m_attachmentType;   // 0x2C
	};
	static_assert(sizeof(hkbAttachmentSetup) == 0x30);
	static_assert(offsetof(hkbAttachmentSetup, m_blendInTime) == 0x10);
	static_assert(offsetof(hkbAttachmentSetup, m_moveAttacherFraction) == 0x14);
	static_assert(offsetof(hkbAttachmentSetup, m_gain) == 0x18);
	static_assert(offsetof(hkbAttachmentSetup, m_extrapolationTimeStep) == 0x1C);
	static_assert(offsetof(hkbAttachmentSetup, m_fixUpGain) == 0x20);
	static_assert(offsetof(hkbAttachmentSetup, m_maxLinearDistance) == 0x24);
	static_assert(offsetof(hkbAttachmentSetup, m_maxAngularDistance) == 0x28);
	static_assert(offsetof(hkbAttachmentSetup, m_attachmentType) == 0x2C);
}
