#include "HumanA.hh"

class HumanB
{
public:
    HumanB(std::string str);
    void attack();
    void setWeapon(Weapon &weapon);
private:
    std::string name;
    Weapon* weaponB;
};
