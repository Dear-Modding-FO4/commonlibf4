#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class Node;

	class __declspec(novtable) hkXmlParser :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkXmlParser };
		inline static constexpr auto VTABLE{ VTABLE::hkXmlParser };

		// add
		virtual void nextNode();  // 0x20 [04] (hkXmlParser::Node___hkStreamReader_)
		virtual void putBack();  // 0x28 [05] (hkXmlParser::Node_)
		virtual void expandNode();  // 0x30 [06] (StartElement* s, Tree& tree, hkStreamReader* reader)

		// members
		hkArray<Node*> m_pendingNodes;  // 0x10
		hkStringPtr m_lastError;        // 0x20
	};
	static_assert(sizeof(hkXmlParser) == 0x28);
	static_assert(offsetof(hkXmlParser, m_pendingNodes) == 0x10);
	static_assert(offsetof(hkXmlParser, m_lastError) == 0x20);
}
