#pragma once

#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementInterface.h"

namespace RE
{
	class BSPathingRequest;
	class BSPathingSolution;

	class __declspec(novtable) IMovementSetGoal :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementSetGoal };
		static constexpr auto VTABLE{ VTABLE::IMovementSetGoal };

		// add
		virtual bool SetGoal(const BSTSmartPointer<BSPathingRequest>& a_request) = 0;                                                    // 01
		virtual void SetRequestRestrictions(const BSTSmartPointer<BSPathingRequest>& a_request) = 0;                                     // 02
		virtual void SetPath(const BSTSmartPointer<BSPathingSolution>& a_path, const BSTSmartPointer<BSPathingRequest>& a_request) = 0;  // 03
		virtual void ClearGoal() = 0;                                                                                                    // 04
		virtual void ForceRepath() = 0;                                                                                                  // 05

		virtual void Unk_06() = 0;  // 06
	};
	static_assert(sizeof(IMovementSetGoal) == 0x8);
}
