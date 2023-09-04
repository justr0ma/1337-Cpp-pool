#include "Zombie.hh"

int main()
{
    Zombie* a = zombieHorde(2, "just r0ma");
    a[1].announce();

    delete [] a;
}
