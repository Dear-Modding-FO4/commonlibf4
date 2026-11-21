#pragma once
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbCompiledExpressionSetToken
	{
	public:

		enum class TokenType : std::uint32_t
		{
			kTokenTypeNone = 0,
			kTokenTypeOperator = 1,
			kTokenTypeNumber = 2,
			kTokenTypeVariableIndex = 3,
			kTokenTypeOpeningParen = 4,
			kTokenTypeClosingParen = 5,
			kTokenTypeComma = 6,
			kTokenTypeCharacterPropertyIndex = 7
		};

		enum class Operator : std::uint8_t
		{
			kOpNop = 0,
			kOpRand01 = 1,
			kOpLogicalNot = 2,
			kOpUnaryMinus = 3,
			kOpUnaryPlus = 4,
			kOpSin = 5,
			kOpCos = 6,
			kOpAsin = 7,
			kOpAcos = 8,
			kOpSqrt = 9,
			kOpFabs = 10,
			kOpCeil = 11,
			kOpFloor = 12,
			kOpSqrtinv = 13,
			kOpMul = 14,
			kOpDiv = 15,
			kOpAdd = 16,
			kOpSub = 17,
			kOpLogicalOr = 18,
			kOpLogicalAnd = 19,
			kOpEq = 20,
			kOpNeq = 21,
			kOpLt = 22,
			kOpGt = 23,
			kOpLeq = 24,
			kOpGeq = 25,
			kOpPow = 26,
			kOpMax2 = 27,
			kOpMin2 = 28,
			kOpRandrange = 29,
			kOpAtan2 = 30,
			kOpClamp = 31,
			kOpMod = 32,
			kOpDeg2rad = 33,
			kOpRad2deg = 34,
			kOpCosd = 35,
			kOpSind = 36,
			kOpAcosd = 37,
			kOpAsind = 38,
			kOpAtan2d = 39,
			kOpSign = 40,
			kOpLerp = 41,
			kOpClerp = 42,
			kOpCond = 43
		};

		// members
		float m_data;            // 0x00
		std::int8_t m_type;      // 0x04
		hkEnum<Operator, std::int8_t> m_operator;  // 0x05
	};
	static_assert(sizeof(hkbCompiledExpressionSetToken) == 0x8);
	static_assert(offsetof(hkbCompiledExpressionSetToken, m_data) == 0x0);
	static_assert(offsetof(hkbCompiledExpressionSetToken, m_type) == 0x4);
	static_assert(offsetof(hkbCompiledExpressionSetToken, m_operator) == 0x5);
}
