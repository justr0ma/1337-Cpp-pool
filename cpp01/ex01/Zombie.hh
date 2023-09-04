#include <string>
#include <iostream>

class Zombie
{
public:
    void setname(std::string name);
    void announce(void);
    ~Zombie();
private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);
