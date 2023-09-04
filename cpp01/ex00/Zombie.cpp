#include "Zombie.hh"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string nam)
{
    name = nam;
}

Zombie::~Zombie()
{
    std::cout << name << " : destructor call"<< std::endl;
}
