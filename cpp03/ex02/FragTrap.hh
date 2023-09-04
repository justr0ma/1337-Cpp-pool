#include "ScavTrap.hh"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap& scav);
    FragTrap& operator=(FragTrap &fixe);
    ~FragTrap();
    void highFivesGuys(void);
};
