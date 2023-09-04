#include "easyfind.h"

int main()
{
    std::vector<int> v;//{10,20,30,40};
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(0);
    easyfind(v, 20);
}
