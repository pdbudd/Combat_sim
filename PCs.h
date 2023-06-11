#pragma once
#include <iostream>
#include <map>
	
enum class attributes {
	strength,
	dexterity,
	wisdom,
	intelligence,
	constitution,
	charisma
};

std::string getAttributeString(attributes value);

enum class conditions {
	dead,
	prone,
	unconscious,
	paralyzed,
	petrified,
	incapacitated,
	stunned,
	blinded,
	deafened,
	grappled,
	restrained,
	charmed,
	none
};

std::string getConditionString(conditions value);

class NPC {
public:
private:
	int HP, AC;
};