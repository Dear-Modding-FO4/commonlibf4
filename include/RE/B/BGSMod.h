#pragma once

#include "RE/B/BGSAttachParentArray.h"
#include "RE/B/BGSModelMaterialSwap.h"
#include "RE/B/BGSTypedKeywordValue.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTDataBuffer.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class ExtraDataList;
	class INSTANCE_FILTER;
}

namespace RE::BGSMod
{
	namespace Attachment
	{
		class Instance;
		class Mod;
	}

	namespace Property
	{
		enum class OP : std::uint32_t
		{
			kSet = 0,
			kMul = 1,
			kAnd = 1,
			kRem = 1,
			kAdd = 2,
			kOr = 2
		};

		enum class TYPE : std::uint32_t
		{
			kInt,
			kFloat,
			kBool,
			kString,
			kForm,
			kEnum,
			kPair
		};

		enum class BLOCKIDS : std::uint32_t
		{
			kOMOD = 0x0,
			kPMOD = 0x1
		};

		enum class WEAPON : std::uint32_t
		{
			kSpeed = 0,
			kReach = 1,
			kMinRange = 2,
			kMaxRange = 3,
			kAttackDelaySec = 4,
			kOutOfRangeDamageMult = 6,
			kSecondaryDamage = 7,
			kCriticalChargeBonus = 8,
			kHitBehavior = 9,
			kRank = 10,
			kAmmoCapacity = 12,
			kType = 15,
			kPlayerOnly = 16,
			kNPCUseAmmo = 17,
			kCharge = 18,
			kCrime = 19,
			kFixedRange = 20,
			kEffectOnDeath = 21,
			kAlternateRumble = 22,
			kNonHostile = 23,
			kIgnoreResist = 24,
			kAutomatic = 25,
			kCantDrop = 26,
			kNonPlayable = 27,
			kAttackDamage = 28,
			kValue = 29,
			kWeight = 30,
			kKeywords = 31,
			kAimModel = 32,
			kAimModelMinConeDegrees = 33,
			kAimModelMaxConeDegrees = 34,
			kAimModelConeIncreasePerShot = 35,
			kAimModelConeDecreasePerSec = 36,
			kAimModelConeDecreaseDelayMs = 37,
			kAimModelConeSneakMultiplier = 38,
			kAimModelRecoilDiminishSpringForce = 39,
			kAimModelRecoilDiminishSightsMult = 40,
			kAimModelRecoilMaxDegPerShot = 41,
			kAimModelRecoilMinDegPerShot = 42,
			kAimModelRecoilHipMult = 43,
			kAimModelRecoilShotsForRunaway = 44,
			kAimModelRecoilArcDeg = 45,
			kAimModelRecoilArcRotateDeg = 46,
			kAimModelConeIronSightsMultiplier = 47,
			kHasScope = 48,
			kFOVMult = 49,
			kFireSeconds = 50,
			kNumProjectiles = 51,
			kAttackSound = 52,
			kAttackSound2D = 53,
			kAttackLoop = 54,
			kAttackFailSound = 55,
			kIdleSound = 56,
			kEquipSound = 57,
			kUnEquipSound = 58,
			kSoundLevel = 59,
			kImpactDataSet = 60,
			kAmmo = 61,
			kEffect = 62,
			kBlockBashImpactData = 63,
			kBlockBashMaterial = 64,
			kEnchantments = 65,
			kAimModelBaseStability = 66,
			kZoomData = 67,
			kZoomOverlay = 68,
			kZoomImageSpace = 69,
			kCameraOffsetX = 70,
			kCameraOffsetY = 71,
			kCameraOffsetZ = 72,
			kEquipSlot = 73,
			kSoundLevelMult = 74,
			kNPCAddAmmoList = 75,
			kReloadSpeed = 76,
			kDamageTypes = 77,
			kAccuracyBonus = 78,
			kAttackActionPointCost = 79,
			kRangedOverrideProjectile = 80,
			kBoltAction = 81,
			kStaggerValue = 82,
			kSightedTransitionSeconds = 83,
			kFullPowerSeconds = 84,
			kHoldInputToPower = 85,
			kRepeatableSingleFire = 86,
			kMinPowerPerShot = 87,
			kColorRemappingIndex = 88,
			kMaterialSwaps = 89,
			kCriticalDamageMult = 90,
			kFastEquipSound = 91,
			kDisableShells = 92,
			kChargeAttack = 93,
			kActorValues = 94
		};

		enum class ARMOR : std::uint32_t
		{
			kEnchantments = 0,
			kBlockBashImpactData = 1,
			kBlockBashMaterial = 2,
			kKeywords = 3,
			kWeight = 4,
			kValue = 5,
			kRating = 6,
			kIndex = 7,
			kDamageTypes = 9,
			kActorValues = 10,
			kHealth = 11,
			kColorRemappingIndex = 12,
			kMaterialSwaps = 13
		};

		enum class NPC : std::uint32_t
		{
			kKeywords = 0,
			kForcedInventory = 1,
			kXPOffset = 2,
			kEnchantments = 3,
			kColorRemappingIndex = 4,
			kMaterialSwaps = 5
		};

		class Mod  // id == 1
		{
		public:
			union FLOATINT
			{
			public:
				// members
				std::int32_t i;
				float        f;
			};
			static_assert(sizeof(FLOATINT) == 0x4);

			class MinMax
			{
			public:
				// members
				FLOATINT min;  // 0
				FLOATINT max;  // 4
			};
			static_assert(sizeof(MinMax) == 0x8);

			class FormValuePair
			{
			public:
				// members
				TESFormID formID;  // 0
				float     value;   // 4
			};
			static_assert(sizeof(FormValuePair) == 0x8);

			union DATATYPE
			{
			public:
				DATATYPE() noexcept :
					form(nullptr)
				{}

				~DATATYPE() noexcept {}

				// members
				BSFixedString str;
				TESForm*      form;
				MinMax        mm;
				FormValuePair fv;
			};
			static_assert(sizeof(DATATYPE) == 0x8);

			void Initialize(std::uint32_t a_target) noexcept
			{
				data.form = nullptr;
				target = a_target;
				op = OP::kSet;
				type = TYPE::kInt;
				step = 0;
			}

			void ClearData()
			{
				using func_t = decltype(&Mod::ClearData);
				static REL::Relocation<func_t> func{ ID::BGSMod::Property::Mod::ClearData };
				return func(this);
			}

			// members
			DATATYPE      data;        // 00
			std::uint32_t target: 11;  // 08:00
			OP            op: 2;       // 08:11
			TYPE          type: 3;     // 08:13
			std::int16_t  step;        // 0C
		};
		static_assert(sizeof(Mod) == 0x10);
	}

	class Container :
		public BSTDataBuffer<2>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMod__Container };

		class Data
		{
		public:
			// members
			Attachment::Instance* attachments;       // 00
			Property::Mod*        propertyMods;      // 08
			std::uint32_t         attachmentCount;   // 10
			std::uint32_t         propertyModCount;  // 14
		};
		static_assert(sizeof(Data) == 0x18);

		Data* GetData(Data* a_data) const
		{
			using func_t = decltype(&Container::GetData);
			static REL::Relocation<func_t> func{ ID::BGSMod::Container::GetData };
			return func(this, a_data);
		}

		void Set(const Data& a_data)
		{
			using func_t = decltype(&Container::Set);
			static REL::Relocation<func_t> func{ ID::BGSMod::Container::Set };
			return func(this, a_data);
		}

		void FreeBuffer()
		{
			using func_t = decltype(&Container::FreeBuffer);
			static REL::Relocation<func_t> func{ ID::BGSMod::Container::FreeBuffer };
			return func(this);
		}
	};
	static_assert(sizeof(Container) == 0x10);

	class ObjectIndexData
	{
	public:
		std::uint32_t objectID;  // 0
		std::uint8_t  index;     // 4
		std::uint8_t  rank;      // 5
		std::uint8_t  disabled;  // 6
	};
	static_assert(sizeof(ObjectIndexData) == 0x8);

	namespace Attachment
	{
		[[nodiscard]] inline BSTHashMap<const Mod*, TESObjectMISC*>& GetAllLooseMods()
		{
			static REL::Relocation<BSTHashMap<const Mod*, TESObjectMISC*>*> mods{ ID::BGSMod::Attachment::GetAllLooseMods, -0x8 };
			return *mods;
		}

		class __declspec(novtable) Mod :
			public TESForm,               // 00
			public TESFullName,           // 20
			public TESDescription,        // 30
			public BGSModelMaterialSwap,  // 48
			public Container              // 88
		{
		public:
			static constexpr auto RTTI{ RTTI::BGSMod__Attachment__Mod };
			static constexpr auto VTABLE{ VTABLE::BGSMod__Attachment__Mod };
			static constexpr auto FORM_ID{ ENUM_FORM_ID::kOMOD };
			static constexpr auto TYPE_ID{ BSScript::kObjectMod };

			class Data :
				public Container::Data  // 00
			{
			public:
				// members
				REX::TEnumSet<ENUM_FORM_ID, std::uint8_t> targetFormType;           // 18
				std::int8_t                               maxRank;                  // 19
				std::int8_t                               lvlsPerTierScaledOffset;  // 1A
				bool                                      optional;                 // 1B
				bool                                      childrenExclusive;        // 1C
			};
			static_assert(sizeof(Data) == 0x20);

			static void FindModsForLooseMod(TESObjectMISC* a_looseMod, BSScrapArray<BGSMod::Attachment::Mod*>& a_result)
			{
				using func_t = decltype(&Mod::FindModsForLooseMod);
				static REL::Relocation<func_t> func{ ID::BGSMod::Attachment::Mod::FindModsForLooseMod };
				return func(a_looseMod, a_result);
			}

			void GetData(Data& a_data) const
			{
				using func_t = decltype(&Mod::GetData);
				static REL::Relocation<func_t> func{ ID::BGSMod::Attachment::Mod::GetData };
				return func(this, a_data);
			}

			TESObjectMISC* GetLooseMod()
			{
				using func_t = decltype(&Mod::GetLooseMod);
				static REL::Relocation<func_t> func{ ID::BGSMod::Attachment::Mod::GetLooseMod };
				return func(this);
			}

			void SetLooseMod(TESObjectMISC* misc)
			{
				using func_t = decltype(&Mod::SetLooseMod);
				static REL::Relocation<func_t> func{ ID::BGSMod::Attachment::Mod::SetLooseMod };
				return func(this, misc);
			}

			// members
			BGSAttachParentArray                                         attachParents;            // 98
			BGSTypedKeywordValueArray<KeywordType::kInstantiationFilter> filterKeywords;           // B0
			BGSTypedKeywordValue<KeywordType::kAttachPoint>              attachPoint;              // C0
			REX::TEnumSet<ENUM_FORM_ID, std::uint8_t>                    targetFormType;           // C2
			std::uint8_t                                                 maxRank;                  // C3
			std::uint8_t                                                 lvlsPerTierScaledOffset;  // C4
			std::int8_t                                                  priority;                 // C5
			bool                                                         optional: 1;              // C6:0
			bool                                                         childrenExclusive: 1;     // C6:1
		};
		static_assert(sizeof(Mod) == 0xC8);

		class Instance  // id == 0
		{
		public:
			// members
			Mod*         mod;                   // 00
			std::uint8_t index;                 // 08
			bool         optional: 1;           // 09:0
			bool         childrenExclusive: 1;  // 09:1
		};
		static_assert(sizeof(Instance) == 0x10);
	}

	namespace Template
	{
		class __declspec(novtable) Item :
			public TESFullName,       // 00
			public BGSMod::Container  // 10
		{
		public:
			static constexpr auto RTTI{ RTTI::BGSMod__Template__Item };
			static constexpr auto VTABLE{ VTABLE::BGSMod__Template__Item };

			// members
			BGSMod::Template::Items* parentTemplate;         // 20
			BGSKeyword**             nameKeywordA;           // 28
			std::uint16_t            parent;                 // 30
			std::int8_t              levelMin;               // 32
			std::int8_t              levelMax;               // 33
			std::int8_t              keywords;               // 34
			std::int8_t              tierStartLevel;         // 35
			std::int8_t              altLevelsPerTier;       // 36
			bool                     isDefault: 1;           // 37:1
			bool                     fullNameEditorOnly: 1;  // 37:2
		};
		static_assert(sizeof(Item) == 0x38);

		class __declspec(novtable) Items :
			public BaseFormComponent  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::BGSMod__Template__Items };
			static constexpr auto VTABLE{ VTABLE::BGSMod__Template__Items };

			static void CreateInstanceDataForObjectAndExtra(TESBoundObject& a_object, ExtraDataList& a_extra, const INSTANCE_FILTER* a_filter, bool a_useDefault)
			{
				using func_t = decltype(&Items::CreateInstanceDataForObjectAndExtra);
				static REL::Relocation<func_t> func{ ID::BGSMod::Template::Items::CreateInstanceDataForObjectAndExtra };
				return func(a_object, a_extra, a_filter, a_useDefault);
			}

			static bool CreateInstanceDataForReference(TESObjectREFR* a_reference, const INSTANCE_FILTER* a_filter, bool a_useDefault)
			{
				using func_t = decltype(&Items::CreateInstanceDataForReference);
				static REL::Relocation<func_t> func{ ID::BGSMod::Template::Items::CreateInstanceDataForReference };
				return func(a_reference, a_filter, a_useDefault);
			}

			// override (BaseFormComponent)
			std::uint32_t GetFormComponentType() const override { return 'TJBO'; }  // 01
			void          InitializeDataComponent() override { return; }            // 02
			void          ClearDataComponent() override;                            // 03
			void          InitComponent() override;                                 // 04
			void          CopyComponent(BaseFormComponent*) override { return; }    // 06
			void          CopyComponent(BaseFormComponent*, TESForm*) override;     // 05

			// members
			BSTArray<Item*> items;  // 08
		};
		static_assert(sizeof(Items) == 0x20);
	}
}
