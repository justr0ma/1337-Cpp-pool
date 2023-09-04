#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 2)
        BitcoinExchange just(argv[1]);
    else
        std::cout << "Error: could not open file." << std::endl;
}
