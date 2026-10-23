#pragma once

#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementInterface.h"

namespace RE
{
	class BSPathingRequest;
	class BSPathingSolution;

	class __declspec(novtable) IMovementQueryPathingState :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryPathingState };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryPathingState };

		// add
		virtual bool GetCurrentRequest(BSTSmartPointer<BSPathingRequest>& a_request) const = 0;          // 01
		virtual bool GetCurrentPath(BSTSmartPointer<BSPathingSolution>& a_path) const = 0;               // 02
		virtual bool DidRequestComplete(const BSTSmartPointer<BSPathingRequest>& a_request) const = 0;   // 03
		virtual bool DidRequestFail(const BSTSmartPointer<BSPathingRequest>& a_request) const = 0;       // 04
		virtual bool IsRequestProcessing(const BSTSmartPointer<BSPathingRequest>& a_request) const = 0;  // 05
		virtual bool IsRequestBuilding(const BSTSmartPointer<BSPathingRequest>& a_request) const = 0;    // 06

		virtual void Unk_07() = 0;  // 07
		virtual void Unk_08() = 0;  // 08

		virtual bool DidPathingFail() const = 0;     // 09
		virtual bool IsPathingComplete() const = 0;  // 0A
		virtual bool IsPathing() const = 0;          // 0B
		virtual bool IsPathValid() const = 0;        // 0C
		virtual bool IsWaitingOnPath() const = 0;    // 0D
	};
	static_assert(sizeof(IMovementQueryPathingState) == 0x8);
}
