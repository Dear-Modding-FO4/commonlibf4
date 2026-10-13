#pragma once

#include "RE/S/Setting.h"

namespace RE::ShadowSettings
{
	namespace detail
	{
		template <class T, const REL::VariantID& ID>
		[[nodiscard]] inline T* GetSettingObject()
		{
			static REL::Relocation<T*> value{ ID };
			return value.get();
		}
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowMapResolution()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::iShadowMapResolution>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetDirShadowSplits()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::iDirShadowSplits>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetDirShadowDistance()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::fDirShadowDistance>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowDistance()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::fShadowDistance>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetBlendSplitDirShadow()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::fBlendSplitDirShadow>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowBiasScale()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::fShadowBiasScale>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetShadowFilter()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::uiShadowFilter>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetOrthoShadowFilter()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::uiOrthoShadowFilter>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetLocalShadowMapHalveEveryXUnit()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::flocalShadowMapHalveEveryXUnit>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetMaxFocusShadows()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::iMaxFocusShadows>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetMaxFocusShadowsDialogue()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::iMaxFocusShadowsDialogue>();
	}

	[[nodiscard]] inline SettingT<INISettingCollection>* GetSunUpdateThreshold()
	{
		return detail::GetSettingObject<SettingT<INISettingCollection>, ID::ShadowSettings::fSunUpdateThreshold>();
	}

	[[nodiscard]] inline SettingT<INISettingCollection>* GetSunShadowUpdateTime()
	{
		return detail::GetSettingObject<SettingT<INISettingCollection>, ID::ShadowSettings::fSunShadowUpdateTime>();
	}

	[[nodiscard]] inline Setting* GetSunShadowMinAngle()
	{
		return detail::GetSettingObject<Setting, ID::ShadowSettings::fSunShadowMinAngle>();
	}

	[[nodiscard]] inline Setting* GetSunShadowScale()
	{
		return detail::GetSettingObject<Setting, ID::ShadowSettings::fSunShadowScale>();
	}

	[[nodiscard]] inline SettingT<INIPrefSettingCollection>* GetSinglePassDirShadow()
	{
		return detail::GetSettingObject<SettingT<INIPrefSettingCollection>, ID::ShadowSettings::bSinglePassDirShadow>();
	}
}
