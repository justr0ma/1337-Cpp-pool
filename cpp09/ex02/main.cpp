#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        PmergeMe just(argv);
    }
    else
        std::cout << "Error" << std::endl;
}
