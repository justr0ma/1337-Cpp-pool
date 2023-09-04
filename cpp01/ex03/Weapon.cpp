#include "Weapon.hh"

const std::string& Weapon::getType()
{
   const std::string& str = type;
    return (str);
}

void Weapon::setType(std::string str)
{
    type = str;
}

Weapon::Weapon() {}

Weapon::Weapon(std::string str)
{
    type = str;
}
