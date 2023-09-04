#include "Zombie.hh"

void Zombie::setname(std::string nam)
{
    name = nam;
}

void Zombie::announce(void)
{
    std::cout << name << ": zombie in r0ma ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "out from r0ma" << std::endl;
}
