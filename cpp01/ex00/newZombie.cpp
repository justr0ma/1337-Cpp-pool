#include "Zombie.hh"

Zombie* newZombie(std::string name)
{
    Zombie* nzombie = new Zombie;
    nzombie->setname(name);
    return (nzombie);
}