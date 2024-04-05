#pragma once
#include "typedef.h"
#include "hp.h"
#include "statsblock.h"

class Warrior : public Hp, public StatsBlock
{
public:
	static const u16 BASE_HP = 8;
	static const u16 BASE_STR = 5;
	static const u16 BASE_DEX = 3;
	static const u16 BASE_INT = 0;
	static const u16 BASE_ARMOR = 5;
	static const u16 BASE_MAGIC_RESIST = 2;

	Warrior() : Hp(BASE_HP, BASE_HP), StatsBlock(BASE_STR, BASE_DEX, BASE_INT, BASE_ARMOR, BASE_MAGIC_RESIST) {}
};