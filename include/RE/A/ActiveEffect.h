#pragma once

#include "RE/A/ActiveEffectReferenceEffectController.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/E/ENUM_TYPE_ID.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class MagicTarget;
	class NiNode;
	class ReferenceEffect;

	namespace MagicSystem
	{
		enum class CastingSource : std::int32_t;
	}

	class __declspec(novtable) ActiveEffect :
		public BSIntrusiveRefCounted
	{
	public:
		static constexpr auto RTTI{ RTTI::ActiveEffect };
		static constexpr auto VTABLE{ VTABLE::ActiveEffect };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kActiveEffect };
		static constexpr auto TYPE_ID{ BSScript::kActiveMagicEffect };

		enum class Flags : std::uint32_t
		{
			kNone = 0,
			kNoHitShader = 1U << 1,
			kNoHitEffectArt = 1U << 2,
			kNoInitialFlare = 1U << 4,
			kApplyingHitEffects = 1U << 5,
			kApplyingSounds = 1U << 6,
			kHasConditions = 1U << 7,
			kRecover = 1U << 9,
			kDualCasted = 1U << 12,
			kInactive = 1U << 15,
			kAppliedEffects = 1U << 16,
			kRemovedEffects = 1U << 17,
			kDispelled = 1U << 18,
			kWornOff = 1U << 31
		};

		enum class ConditionStatus : std::uint32_t
		{
			kNotAvailable = 0xFFFFFFFF,
			kFalse = 0,
			kTrue = 1
		};

		virtual ~ActiveEffect();                                                          // 00
		virtual void           AdjustForPerks(Actor* a_caster, MagicTarget* a_target);    // 01
		virtual void           OnAdd(MagicTarget* a_target);                              // 02
		virtual void           OnRemove();                                                // 03
		virtual TESObjectREFR* GetVisualsTarget();                                        // 04
		virtual void           Update(float a_delta);                                     // 05
		virtual void           EvaluateConditions(float a_delta, bool a_forceUpdate);     // 06
		virtual void           EvaluateActiveStatus(float a_delta, bool a_forceUpdate);   // 07
		virtual bool           IsCausingHealthDamage();                                   // 08
		virtual bool           IsCausingRadDamage();                                      // 09
		virtual void           SetLocation(const NiPoint3& a_location);                   // 0A
		virtual void           SaveGame(BGSSaveGameBuffer* a_buf);                        // 0B
		virtual void           LoadGame(BGSLoadGameBuffer* a_buf);                        // 0C
		virtual void           FinishLoadGame(BGSLoadGameBuffer* a_buf);                  // 0D
		virtual void           Revert(BGSLoadGameBuffer* a_buf);                          // 0E
		virtual std::int32_t   Compare(ActiveEffect* a_otherEffect);                      // 0F
		virtual void           HandleEvent(const BSFixedString& a_eventName);             // 10
		virtual void           SwitchAttachedRoot(NiNode* a_root, NiNode* a_attachRoot);  // 11
		virtual void           HandleQueuedStart();                                       // 12
		virtual bool           ShouldDispelOnDeath() const;                               // 13
		virtual bool           GetAllowMultipleCastingSourceStacking();                   // 14
		virtual void           ClearTargetImpl();                                         // 15
		virtual void           Start();                                                   // 16
		virtual void           Finish();                                                  // 17
		virtual bool           CanFinish();                                               // 18
		virtual bool           CheckCustomSkillUseConditions() const;                     // 19
		virtual float          GetCustomSkillUseMagnitudeMultiplier(float a_mult) const;  // 1A

		bool CheckDisplacementSpellOnTarget()
		{
			using func_t = decltype(&ActiveEffect::CheckDisplacementSpellOnTarget);
			static REL::Relocation<func_t> func{ ID::ActiveEffect::CheckDisplacementSpellOnTarget };
			return func(this);
		}

		[[nodiscard]] Actor* GetTargetActor();

		// members
		ActiveEffectReferenceEffectController hitEffectController;  // 0C
		BSSoundHandle                         persistentSound;      // 30
		ActorHandle                           caster;               // 38
		NiPointer<NiNode>                     sourceNode;           // 40
		MagicItem*                            spell;                // 48
		EffectItem*                           effect;               // 50
		MagicTarget*                          target;               // 58
		TESBoundObject*                       source;               // 60
		BSSimpleList<ReferenceEffect*>*       hitEffects;           // 68
		MagicItem*                            displacementSpell;    // 70
		float                                 elapsedSeconds;       // 74
		float                                 duration;             // 78
		float                                 magnitude;            // 7C
		REX::TEnumSet<Flags, std::uint32_t>   flags;                // 80
		ConditionStatus                       conditionStatus;      // 84
		std::uint16_t                         uniqueID;             // 8C
		MagicSystem::CastingSource            castingSource;        // 90
	};
	static_assert(sizeof(ActiveEffect) == 0x98);
}
