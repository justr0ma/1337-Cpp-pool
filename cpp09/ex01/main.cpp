#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        RPN just(argv[1]);
    }
    else
        std::cout << "Error" << std::endl;
}
