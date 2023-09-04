#include "ClapTrap.hh"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& scav);
    ScavTrap& operator=(ScavTrap &fixe);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
