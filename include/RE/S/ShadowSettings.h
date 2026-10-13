#pragma once

#include "RE/S/Setting.h"

namespace RE::ShadowSettings
{
	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowMapResolution()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::iShadowMapResolution };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetDirShadowSplits()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::iDirShadowSplits };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetDirShadowDistance()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::fDirShadowDistance };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowDistance()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::fShadowDistance };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetBlendSplitDirShadow()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::fBlendSplitDirShadow };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowBiasScale()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::fShadowBiasScale };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowFilter()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::uiShadowFilter };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetOrthoShadowFilter()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::uiOrthoShadowFilter };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetLocalShadowMapHalveEveryXUnit()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::flocalShadowMapHalveEveryXUnit };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetMaxFocusShadows()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::iMaxFocusShadows };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetMaxFocusShadowsDialogue()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::iMaxFocusShadowsDialogue };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INISettingCollection>* GetSunUpdateThreshold()
	{
		static REL::Relocation<SettingT<INISettingCollection>*> value{ ID::ShadowSettings::fSunUpdateThreshold };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INISettingCollection>* GetSunShadowUpdateTime()
	{
		static REL::Relocation<SettingT<INISettingCollection>*> value{ ID::ShadowSettings::fSunShadowUpdateTime };
		return value.get();
	}

	[[nodiscard]] inline Setting* GetSunShadowMinAngle()
	{
		static REL::Relocation<Setting*> value{ ID::ShadowSettings::fSunShadowMinAngle };
		return value.get();
	}

	[[nodiscard]] inline Setting* GetSunShadowScale()
	{
		static REL::Relocation<Setting*> value{ ID::ShadowSettings::fSunShadowScale };
		return value.get();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetSinglePassDirShadow()
	{
		static REL::Relocation<SettingT<INIPrefSettingCollection>*> value{ ID::ShadowSettings::bSinglePassDirShadow };
		return value.get();
	}
}
