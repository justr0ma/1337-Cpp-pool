#include "HumanA.hh"

HumanA::HumanA(std::string str, Weapon &weapn)
{
    name = str;
    weaponA = &weapn;
}

void HumanA::attack()
{
    std::cout << name << "attacks with their" << weaponA->getType() << std::endl;
}
