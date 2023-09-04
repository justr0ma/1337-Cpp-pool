#include "ScavTrap.hh"

ScavTrap::ScavTrap()
{
    std::cout << "default constractor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "constracor scavtrap" << std::endl;
	Name = name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap& scav) : ClapTrap(scav)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destractor scavtrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &fixe)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    
	this->Name = fixe.Name;
	this->Hit_points = fixe.Hit_points;
	this->Energy_points = fixe.Energy_points;
	this->Attack_damage = fixe.Attack_damage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout<<"ScavTrap "<<Name<<" attacks "<<target<<", causing "<<Attack_damage<<" points of damage!" << std::endl;
    }
}
