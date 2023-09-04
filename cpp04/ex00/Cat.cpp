#include "Cat.h"

Cat::Cat()
{
	std::cout << "CAT constractor" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat &cat)
{
	std::cout << "default copy constractor Cat" << std::endl;
	type = cat.getType();
}

Cat& Cat::operator=(Cat &cat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    type = cat.getType();
    return *this;
}

Cat::~Cat()
{
	std::cout << "CAT destractor" << std::endl;
}

void Cat::set(std::string name)
{
	type = name;
}

void Cat::makeSound() const
{
	std::cout << "CAT sound!" << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}
