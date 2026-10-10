#pragma once

#include "RE/A/ActiveEffect.h"
#include "RE/A/ActorValueInfo.h"

namespace RE
{
	class ValueModifierEffect : public ActiveEffect
	{
	public:
		inline static constexpr auto RTTI = RTTI::ValueModifierEffect;
		inline static constexpr auto VTABLE = VTABLE::ValueModifierEffect;

		virtual ~ValueModifierEffect() override;                                                               // 00
		virtual void           OnAdd(MagicTarget* a_target) override;                                          // 02
		virtual TESObjectREFR* GetVisualsTarget() override;                                                    // 04
		virtual void           Update(float a_delta) override;                                                 // 05
		virtual bool           IsCausingHealthDamage() override;                                               // 08
		virtual bool           IsCausingRadDamage() override;                                                  // 09
		virtual bool           GetAllowMultipleCastingSourceStacking() override;                               // 14
		virtual void           ClearTargetImpl() override;                                                     // 15
		virtual void           Start() override;                                                               // 16
		virtual void           Finish() override;                                                              // 17
		virtual bool           CheckCustomSkillUseConditions() const override;                                 // 19
		virtual float          GetCustomSkillUseMagnitudeMultiplier(float a_mult) const override;              // 1A
		virtual bool           ShouldModifyOnStart();                                                          // 1B
		virtual void           ModifyOnStart();                                                                // 1C
		virtual bool           ShouldModifyOnUpdate() const;                                                   // 1D
		virtual void           ModifyOnUpdate(float a_delta);                                                  // 1E
		virtual bool           ShouldModifyOnFinish() const;                                                   // 1F
		virtual void           ModifyOnFinish(Actor* a_caster, Actor* a_target, float a_value);                // 20
		virtual void           ModifyActorValue(Actor* a_actor, float a_value, ActorValueInfo* a_actorValue);  // 21

		// members
		ActorValueInfo* actorValueInfo;  // 98
		float           value;           // A0
	};
	static_assert(sizeof(ValueModifierEffect) == 0xA8);
}
