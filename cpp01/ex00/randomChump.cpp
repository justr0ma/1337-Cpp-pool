#include "Zombie.hh"

void randomChump( std::string name )
{
    Zombie rzombie;
    rzombie.setname(name);
    rzombie.announce();
}
