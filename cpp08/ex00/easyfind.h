#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T f, int s)
{
    typename T::iterator it;

    it = find(f.begin(), f.end(), s);
    if (it != f.end())
    {
        std::cout << s << std::endl;
        return (1);
    }
    std::cout << "not found" << std::endl;
    return (0);
}
