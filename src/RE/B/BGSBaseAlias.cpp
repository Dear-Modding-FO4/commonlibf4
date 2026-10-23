#include "RE/B/BGSBaseAlias.h"

#include "RE/B/BGSLocAlias.h"
#include "RE/B/BGSRefAlias.h"
#include "RE/B/BGSRefCollectionAlias.h"

namespace RE
{
	VMTypeID BGSBaseAlias::GetVMTypeID() const
	{
		const auto& TYPE = QType();
		if (TYPE == BGSRefAlias::TYPE) {
			return BGSRefAlias::TYPE_ID;
		} else if (TYPE == BGSLocAlias::TYPE) {
			return BGSLocAlias::TYPE_ID;
		} else if (TYPE == BGSRefCollectionAlias::TYPE) {
			return BGSRefCollectionAlias::TYPE_ID;
		} else {
			return BGSBaseAlias::TYPE_ID;
		}
	}
}
