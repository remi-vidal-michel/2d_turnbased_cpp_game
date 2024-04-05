#pragma once
#include "typedef.h"

class Hp
{
private:
	u16 CurrentHealth;
	u16 MaxHealth;
public:
	Hp() {
		CurrentHealth = 1;
		MaxHealth = 1;
	}

	Hp(u16 NewHealth, u16 NewMaxHealth) {
		if (NewHealth > NewMaxHealth) {
			CurrentHealth = NewMaxHealth;
		}
		else {
			CurrentHealth = NewHealth;
		}
		MaxHealth = NewMaxHealth;
	}

	u16 getCurrentHealth() {
		return CurrentHealth;
	}

	u16 getMaxHealth() {
		return MaxHealth;
	}
	bool setMaxHealth(u16 NewMaxHealth) {
		if (NewMaxHealth > 0) {
			return false;
		}
		MaxHealth = NewMaxHealth;
		if (CurrentHealth > MaxHealth) {
			CurrentHealth = MaxHealth;
		}
		return true;
	}

	void takeDamage(u16 Damage) {
		if (Damage > CurrentHealth) {
			CurrentHealth = 0;
			return;
		}
		CurrentHealth -= Damage;
	}

	void heal(u16 Heal) {
		if (Heal + CurrentHealth > MaxHealth) {
			CurrentHealth = MaxHealth;
			return;
		}
		CurrentHealth += Heal;
	}
};