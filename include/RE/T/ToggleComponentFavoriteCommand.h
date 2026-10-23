#pragma once

#include "RE/P/PipboyCommand.h"

namespace RE
{
	class __declspec(novtable) ToggleComponentFavoriteCommand :
		public PipboyCommand  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ToggleComponentFavoriteCommand };
		static constexpr auto VTABLE{ VTABLE::ToggleComponentFavoriteCommand };

		// override (PipboyCommand)
		virtual ~ToggleComponentFavoriteCommand();                              // 00
		virtual void                       Init(Json::Value* a_json) override;  // 01
		virtual const PipboyCommandResult* DoValidate() override;               // 02
		virtual const PipboyCommandResult* DoExecute() override;                // 03

		// members
		std::uint32_t inventoryVersion;  // 28, staleness token compared against the live Pip-Boy inventory version
		std::uint32_t componentFormID;   // 2C, form id of a BGSComponent
	};
	static_assert(sizeof(ToggleComponentFavoriteCommand) == 0x30);
	static_assert(offsetof(ToggleComponentFavoriteCommand, inventoryVersion) == 0x28);
	static_assert(offsetof(ToggleComponentFavoriteCommand, componentFormID) == 0x2C);
}
