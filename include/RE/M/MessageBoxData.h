#pragma once

#include "RE/B/BSStringT.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IUIMessageData.h"
#include "RE/R/RelocateMember.h"

namespace RE
{
	enum class UI_DEPTH_PRIORITY;
	enum class WARNING_TYPES;
	class IMessageBoxCallback;

	class __declspec(novtable) MessageBoxData :
	    public IUIMessageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MessageBoxData };
		static constexpr auto VTABLE{ VTABLE::MessageBoxData };

		struct AERuntimeData
		{
			std::uint32_t cancelButtonIndex{ 0xFFFFFFFF };  // 00
			bool          canCancel{ false };               // 04
		};
		static_assert(offsetof(AERuntimeData, cancelButtonIndex) == 0x0);
		static_assert(offsetof(AERuntimeData, canCancel) == 0x4);
		static_assert(sizeof(AERuntimeData) == 0x8);

		// sizeof reserves AE storage; OG/NG native instances are smaller.
		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kAE ? 0x70 : 0x68;
		}

		// AE-only cancellation fields; null on OG/NG.
		[[nodiscard]] AERuntimeData* GetAERuntimeData() noexcept
		{
			return REX::FModule::IsRuntimeAE() ?
			           std::addressof(REL::RelocateMember<AERuntimeData>(this, REL::Offset{ 0x68, 0x68, 0x68 })) :
			           nullptr;
		}

		[[nodiscard]] const AERuntimeData* GetAERuntimeData() const noexcept
		{
			return REX::FModule::IsRuntimeAE() ?
			           std::addressof(REL::RelocateMember<AERuntimeData>(this, REL::Offset{ 0x68, 0x68, 0x68 })) :
			           nullptr;
		}

		// members
		BSString                                        headerText;      // 18
		BSString                                        bodyText;        // 28
		BSTArray<BSString>                              buttonText;      // 38
		REX::TEnumSet<WARNING_TYPES, std::uint32_t>     warningContext;  // 50
		BSTSmartPointer<IMessageBoxCallback>            callback;        // 58
		REX::TEnumSet<UI_DEPTH_PRIORITY, std::uint32_t> menuDepth;       // 60
		bool                                            modal;           // 64
		bool                                            ensureUnique;    // 65

	private:
		// Maximum native storage; local construction disables cancellation.
		AERuntimeData _aeRuntimeData;  // 68
	};
	static_assert(sizeof(MessageBoxData) == 0x70);
}
