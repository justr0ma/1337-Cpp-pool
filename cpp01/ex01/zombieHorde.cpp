#include "Zombie.hh"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    if (N > 0)
    {
        Zombie* zombie  = new Zombie[N];
        while (i < N)
            zombie[i++].setname(name);
        return (zombie);
    }
    else
        exit(1);
}
