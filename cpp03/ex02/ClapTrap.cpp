#include "ClapTrap.hh"

ClapTrap::ClapTrap()
{
	std::cout << "Default constractor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	Name = name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "constructors ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& fixe)
{
	std::cout << "Copy constructor called" << std::endl;
	Name = fixe.Name;
	Hit_points = fixe.Hit_points;
	Energy_points = fixe.Energy_points;
	Attack_damage = fixe.Attack_damage;
}

ClapTrap& ClapTrap::operator=(ClapTrap &fixe)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = fixe.Name;
	Hit_points = fixe.Hit_points;
	Energy_points = fixe.Energy_points;
	Attack_damage = fixe.Attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<", causing "<<Attack_damage<<" points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout<<"ClapTrap "<<Name << " " << amount <<" hit points back" << std::endl;
        Hit_points += amount;
        Energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "just take this " << amount << " damage" << std::endl;
    }
}
