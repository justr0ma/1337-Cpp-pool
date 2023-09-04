#include "FragTrap.hh"

FragTrap::FragTrap()
{
    std::cout << "Default constractor FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "constracor FragTrap" << std::endl;
	Name = name;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
};

FragTrap::FragTrap(FragTrap& scav) : ClapTrap(scav)
{
    std::cout << "Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destractor FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &fixe)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = fixe.Name;
	this->Hit_points = fixe.Hit_points;
	this->Energy_points = fixe.Energy_points;
	this->Attack_damage = fixe.Attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<< "high fives request" << std::endl;
}
