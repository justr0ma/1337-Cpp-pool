#include "Zombie.hh"

int main()
{
    //Zombie zombi;
    //zombi.announce();
    Zombie *a;
    a =  newZombie("malta");
    a->announce();
    delete a;
    //randomChump("r0ma");
}
