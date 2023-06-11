#include "PCs.h"

std::string getAttributeString(attributes value) {
    static std::map<attributes, std::string> attributeToString = {
        {attributes::strength, "Strength"},
        {attributes::dexterity, "Dexterity"},
        {attributes::wisdom, "Wisdom"},
        {attributes::intelligence, "Intelligence"},
        {attributes::constitution, "Constitution"},
        {attributes::charisma, "Charisma"}
    };

    if (attributeToString.count(value) > 0) {
        return attributeToString[value];
    }
    return "Unknown";
}

std::string getConditionString(conditions value) {
    static std::map<conditions, std::string> conditionToString = {
        {conditions::dead, "Dead"},
        {conditions::prone, "Prone"},
        {conditions::unconscious, "Unconscious"},
        {conditions::paralyzed, "Paralyzed"},
        {conditions::petrified, "Petrified"},
        {conditions::incapacitated, "Incapacitated"},
        {conditions::stunned, "Stunned"},
        {conditions::blinded, "Blinded"},
        {conditions::deafened, "Deafened"},
        {conditions::grappled, "Grappled"},
        {conditions::restrained, "Restrained"},
        {conditions::charmed, "Charmed"},
        {conditions::none, "None"}
    };

    if (conditionToString.count(value) > 0) {
        return conditionToString[value];
    }
    return "Unknown";
}