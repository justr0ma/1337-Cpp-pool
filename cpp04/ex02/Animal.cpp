#include "Animal.h"

Animal::Animal()
{
	std::cout << "Animal constractor" << std::endl;
	type = "Animal";
}

Animal::Animal(Animal &animal)
{
	std::cout << "default copy constractor" << std::endl;
	type = animal.getType();
}

Animal& Animal::operator=(Animal &animal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	type = animal.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destractor" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
