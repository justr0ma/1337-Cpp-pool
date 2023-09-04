#include "ScavTrap.hh"

int main()
{
    ScavTrap b("r0ma");
    ScavTrap a("malta");
    b.guardGate();
    b.attack("malta");
    a.takeDamage(20);
    b.beRepaired(2);
}
