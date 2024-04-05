#pragma once
#include "typedef.h"

struct StatsBlock
{
private:
	u16 Strength;
	u16 Dexterity;
	u16 Intelligence;
	u16 Armor;
	u16 MagicResist;
public:
	StatsBlock()
	{
		Strength = 0;
		Dexterity = 0;
		Intelligence = 0;
		Armor = 0;
		MagicResist = 0;
	}

	explicit StatsBlock(u16 str, u16 dex, u16 intel, u16 ar, u16 mr)
	{
		Strength = str;
		Dexterity = dex;
		Intelligence = intel;
		Armor = ar;
		MagicResist = mr;
	}

	u16 getStrength() const { return Strength; }
	u16 getDexterity() const { return Dexterity; }
	u16 getIntelligence() const { return Intelligence; }
	u16 getArmor() const { return Armor; }
	u16 getMagicResist() const { return MagicResist; }
};