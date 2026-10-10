#pragma once

#include "RE/B/BIPED_MODEL.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class __declspec(novtable) BGSBipedObjectForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSBipedObjectForm };
		static constexpr auto VTABLE{ VTABLE::BGSBipedObjectForm };

		// add
		virtual bool FillsBipedSlot(std::int32_t a_bipedSlot) const;  // 07

		[[nodiscard]] bool FillsBipedSlot(BIPED_OBJECT a_bipedObject) const
		{
			return a_bipedObject != BIPED_OBJECT::kNone && FillsBipedSlot(std::to_underlying(a_bipedObject));
		}

		// members
		BIPED_MODEL bipedModelData;  // 08
	};
	static_assert(sizeof(BGSBipedObjectForm) == 0x10);
}
