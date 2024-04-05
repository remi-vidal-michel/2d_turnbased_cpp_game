#include <iostream>
#include "warrior.h"

int main() {
	Warrior w1;

	std::cout << "Warrior: " << std::endl;
	std::cout << "- Max Health: " << w1.getMaxHealth() << std::endl;
	std::cout << "- Current Health: " << w1.getCurrentHealth() << std::endl;
	std::cout << "- Strength: " << w1.getStrength() << std::endl;
	std::cout << "- Dexterity: " << w1.getDexterity() << std::endl;
	std::cout << "- Intelligence: " << w1.getIntelligence() << std::endl;
	std::cout << "- Armor: " << w1.getArmor() << std::endl;
	std::cout << "- Magic Resist: " << w1.getMagicResist() << std::endl;

	return 0;
}