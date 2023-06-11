#include "Abilities.h"

std::string getDmgTypeString(dmgtype value) {
    if (dmgTypeToString.count(value) > 0) {
        return dmgTypeToString[value];
    }
    return "Unknown";
}

spell::spell() {
	base = attack::attack();
	levelmod = attack::attack();
	baselevel = 0;
	DC = 0;
	type = dmgtype::bludgeoning;
	effect = conditions::none;
	DCtype = attributes::constitution;
}

void spell::GetSpell() {
	std::cout << "Base Attack: "<< std::endl;
	base.GetAttack();
    std::cout << getDmgTypeString(type) <<" damage" << std::endl;
	std::cout << "Modifiers per higher level: " << std::endl;
	levelmod.GetAttack();
	std::cout << "With a base level of " << baselevel << ", a DC of " << DC << " " << getAttributeString(DCtype) << std::endl;
    if (effect != conditions::none) {
        std::cout << "Failure imposes ";
        getConditionString(effect);
    }
}

void spell::SetSpell() {

}

attack::attack()
{
	dice1 = 0; 
	dice2 = 0; 
	mod = 0; 
	range = 0;
}

void attack::GetAttack() {
	std::cout << dice1 << "d" << dice2 << "+" << mod << " dmg with a range of " << range << std::endl;
}

void attack::SetAttack() {
    std::cout << "Enter how many damage dice: " << std::endl;
    std::cin >> this->dice1;
    std::cout << "Type of dice: " << std::endl;
    std::cin >> this->dice2;
    std::cout << "Modifier to attack (if none -> 0): " << std::endl;
    std::cin >> this->mod;
    std::cout << "Range of spell (touch -> 0): " << std::endl;
    std::cin >> this->range;
}
