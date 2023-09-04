#include <string>
#include <iostream>

class Zombie
{
public:
    void announce(void);
    void setname(std::string name);
    ~Zombie();

private:
    std::string name;
};

void randomChump( std::string name );
Zombie* newZombie(std::string name);
