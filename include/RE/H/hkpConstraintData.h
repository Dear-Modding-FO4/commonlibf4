#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkpConstraintRuntime;
	class hkpSolverResults;

	class __declspec(novtable) hkpConstraintData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpConstraintData };

		// add
		virtual std::int32_t getType();  // 0x20 [04]
		virtual void getConstraintInfo();  // 0x28 [05] (hkpConstraintData::ConstraintInfo&)
		virtual void isValid();  // 0x30 [06] (void)
		virtual void setMaximumLinearImpulse(float a_maxLinearImpulse);  // 0x38 [07]
		virtual void setMaximumAngularImpulse(float a_maxAngularImpulse);  // 0x40 [08]
		virtual void setBreachImpulse(float a_breachImpulse);  // 0x48 [09]
		virtual float getMaximumLinearImpulse();  // 0x50 [0A]
		virtual float getMaximumAngularImpulse();  // 0x58 [0B]
		virtual float getBreachImpulse();  // 0x60 [0C]
		virtual void setBodyToNotify(std::int32_t a_bodyIndex);  // 0x68 [0D]
		virtual std::uint8_t getNotifiedBodyIndex();  // 0x70 [0E]
		virtual void setSolvingMethod();  // 0x78 [0F] (hkpConstraintAtom::SolvingMethod method)
		virtual hkResult setInertiaStabilizationFactor(const float a_inertiaStabilizationFactor);  // 0x80 [10]
		virtual hkResult getInertiaStabilizationFactor(float& a_inertiaStabilizationFactorOut);  // 0x88 [11]
		virtual void getRuntimeInfo();  // 0x90 [12] (hkBool_hkpConstraintData::RuntimeInfo&)
		virtual hkpSolverResults* getSolverResults(hkpConstraintRuntime* a_runtime);  // 0x98 [13]
		virtual void addInstance(hkpConstraintRuntime* a_runtime, std::int32_t a_sizeOfRuntime);  // 0xA0 [14]
		virtual void buildJacobian();  // 0xA8 [15] (hkpConstraintQueryIn&_hkpConstraintQueryOut&)
		virtual bool isBuildJacobianCallbackRequired();  // 0xB0 [16]
		virtual void buildJacobianCallback();  // 0xB8 [17] (const hkpConstraintQueryIn &in, const hkpConstraintQueryOut& out)

		enum class ConstraintType : std::uint32_t
		{
			kConstraintTypeBallandsocket = 0,
			kConstraintTypeHinge = 1,
			kConstraintTypeLimitedhinge = 2,
			kConstraintTypePointtopath = 3,
			kConstraintTypePrismatic = 6,
			kConstraintTypeRagdoll = 7,
			kConstraintTypeStiffspring = 8,
			kConstraintTypeWheel = 9,
			kConstraintTypeGeneric = 10,
			kConstraintTypeContact = 11,
			kConstraintTypeBreakable = 12,
			kConstraintTypeMalleable = 13,
			kConstraintTypePointtoplane = 14,
			kConstraintTypePulley = 15,
			kConstraintTypeRotational = 16,
			kConstraintTypeHingeLimits = 18,
			kConstraintTypeRagdollLimits = 19,
			kConstraintTypeCustom = 20,
			kConstraintTypeRackAndPinion = 21,
			kConstraintTypeCogWheel = 22,
			kConstraintTypeFixed = 23,
			kConstraintTypeDeformableFixed = 24,
			kConstraintTypeLinearSlack = 25,
			kBeginConstraintChainTypes = 100,
			kConstraintTypeStiffSpringChain = 100,
			kConstraintTypeBallSocketChain = 101,
			kConstraintTypePoweredChain = 102
		};

		// members
		std::uint64_t m_userData;  // 0x10
	};
	static_assert(sizeof(hkpConstraintData) == 0x18);
	static_assert(offsetof(hkpConstraintData, m_userData) == 0x10);
}
