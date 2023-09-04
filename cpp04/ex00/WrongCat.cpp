#include "WrongCat.h"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constractor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &WrongCat)
{
	std::cout << "efault copy constractor WrongCat" << std::endl;
	type = WrongCat.getType();
}

WrongCat& WrongCat::operator=(WrongCat &WrongCat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    type = WrongCat.getType();
    return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destractor" << std::endl;
}

void WrongCat::set(std::string name)
{
	type = name;
}

void WrongCat::makeSound()
{
	std::cout << "sound of WrongCat" << std::endl;
}
