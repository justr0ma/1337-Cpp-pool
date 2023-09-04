#include "iter.h"

int main()
{
    //char roma[] = "justr0ma";
    int roma[] = {1,2,3,4,5};
    void (*foo)(int &);
    foo = &justone;
    std::cout << roma[0] << std::endl;
    iter(roma, 5, foo);
    std::cout << roma[0];
}
