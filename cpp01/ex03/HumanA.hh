#include "Weapon.hh"

class HumanA
{
public:
    HumanA(std::string str, Weapon &weapon);
    void attack();
private:
    std::string name;
    Weapon* weaponA;
};
