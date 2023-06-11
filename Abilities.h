#ifndef _ABILITIES
#define _ABILITIES

#include "PCs.h"
#include <iostream>
#include <map>


enum class dmgtype {
	slashing,
	bludgeoning,
	piercing,
	fire,
	cold,
	necrotic,
	radiant,
	acid,
	poison,
	force,
	lightning,
	psychic,
	thunder
};

static std::map<dmgtype, std::string> dmgTypeToString = {
	{dmgtype::slashing, "Slashing"},
	{dmgtype::bludgeoning, "Bludgeoning"},
	{dmgtype::piercing, "Piercing"},
	{dmgtype::fire, "Fire"},
	{dmgtype::cold, "Cold"},
	{dmgtype::necrotic, "Necrotic"},
	{dmgtype::radiant, "Radiant"},
	{dmgtype::acid, "Acid"},
	{dmgtype::poison, "Poison"},
	{dmgtype::force, "Force"},
	{dmgtype::lightning, "Lightning"},
	{dmgtype::psychic, "Psychic"},
	{dmgtype::thunder, "Thunder"}
};

std::string getDmgTypeString(dmgtype value);

class attack {
public:
	attack();
	void GetAttack();
	void SetAttack();
private:
	int dice1, dice2, mod, range;
};

class spell {
public:
	spell();
	void GetSpell();
	void SetSpell();
private:
	attack base, levelmod;
	int baselevel, DC;
	attributes DCtype;
	conditions effect;
	dmgtype type;
};

class ranged {
public:
private:
	attack base;
	conditions effect;
	dmgtype type;
};

class melee {
public:
private:
	attack base;
	conditions effect;
	dmgtype type;
};
#endif // !_ABILITIES