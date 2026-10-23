#pragma once

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTFlags.h"

namespace RE
{
	class NiObjectNET;
	class NiUpdateData;

	class __declspec(novtable) NiTimeController :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTimeController };
		static constexpr auto VTABLE{ VTABLE::NiTimeController };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiTimeController };

		// add
		virtual void  Start(float a_time);                             // 28
		virtual void  Stop();                                          // 29
		virtual void  Update(NiUpdateData& a_updateData) = 0;          // 2A
		virtual void  SetTarget(NiObjectNET* a_target);                // 2B
		virtual bool  IsTransformController() const { return false; }  // 2C
		virtual bool  IsVertexController() const { return false; }     // 2D
		virtual float ComputeScaledTime(float a_time);                 // 2E
		virtual void  OnPreDisplay() { return; }                       // 2F
		virtual bool  IsStreamable() const { return true; }            // 30
		virtual bool  TargetIsRequiredType() const = 0;                // 31

		// members
		NiTFlags<std::uint16_t, NiTimeController> flags;             // 10
		float                                     frequency;         // 14
		float                                     phase;             // 18
		float                                     loKeyTime;         // 1C
		float                                     hiKeyTime;         // 20
		float                                     startTime;         // 24
		float                                     lastTime;          // 28
		float                                     weightedLastTime;  // 2C
		float                                     scaledTime;        // 30
		NiObjectNET*                              target;            // 38
		NiPointer<NiTimeController>               next;              // 40
	};
	static_assert(sizeof(NiTimeController) == 0x48);
}
