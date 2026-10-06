#pragma once

#include "RE/B/BGSEquipIndex.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BIPOBJECT.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class NiNode;
	class TESForm;
	class TESObjectREFR;

	class BipedAnim :
		public BSIntrusiveRefCounted  // 0000
	{
	public:
		const BIPOBJECT* GetBipObject(const BIPED_OBJECT a_bipedObject) const
		{
			return std::addressof(object[std::to_underlying(a_bipedObject)]);
		}

		BIPOBJECT* GetBipObject(const BIPED_OBJECT a_bipedObject)
		{
			return std::addressof(object[std::to_underlying(a_bipedObject)]);
		}

		[[nodiscard]] static BIPED_OBJECT GetBipedObject(TESObjectREFR* a_refr, TESForm* a_form, std::uint32_t a_equipIndex)
		{
			using func_t = decltype(&BipedAnim::GetBipedObject);
			static REL::Relocation<func_t> func{ ID::BipedAnim::GetBipedObject };
			return func(a_refr, a_form, a_equipIndex);
		}

		[[nodiscard]] static BGSEquipIndex GetBipedObjectEquipIndex(TESObjectREFR* a_refr, TESForm* a_form, BIPED_OBJECT a_bipedObject)
		{
			using func_t = decltype(&BipedAnim::GetBipedObjectEquipIndex);
			static REL::Relocation<func_t> func{ ID::BipedAnim::GetBipedObjectEquipIndex };
			return func(a_refr, a_form, a_bipedObject);
		}

		[[nodiscard]] BIPOBJECT* GetBodyObject()
		{
			using func_t = decltype(&BipedAnim::GetBodyObject);
			static REL::Relocation<func_t> func{ ID::BipedAnim::GetBodyObject };
			return func(this);
		}

		ObjectRefHandle GetRequester() const
		{
			return actorRef;
		}

		[[nodiscard]] BIPOBJECT* GetShieldObject()
		{
			using func_t = decltype(&BipedAnim::GetShieldObject);
			static REL::Relocation<func_t> func{ ID::BipedAnim::GetShieldObject };
			return func(this);
		}

		void HideHeadExtraGeometry(BIPED_OBJECT a_bipedObject)
		{
			using func_t = decltype(&BipedAnim::HideHeadExtraGeometry);
			static REL::Relocation<func_t> func{ ID::BipedAnim::HideHeadExtraGeometry };
			return func(this, a_bipedObject);
		}

		NiNode* GetRoot() const
		{
			return root;
		}

		// members
		NiNode*         root;                                                       // 0008
		BIPOBJECT       object[std::to_underlying(BIPED_OBJECT::kTotal)];           // 0010
		BIPOBJECT       bufferedObjects[std::to_underlying(BIPED_OBJECT::kTotal)];  // 0F30
		ObjectRefHandle actorRef;                                                   // 1E50
	};
	static_assert(sizeof(BipedAnim) == 0x1E58);
}
