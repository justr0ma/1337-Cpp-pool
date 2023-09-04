#include "HumanB.hh"

HumanB::HumanB(std::string str)
{
    name = str;
}

void HumanB::attack()
{
    if (weaponB == NULL)
        exit(1);
    std::cout << name << "attacks with their" << weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    weaponB  = &weapon;
}
