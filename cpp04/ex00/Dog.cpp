#include "Dog.h"

Dog::Dog()
{
	std::cout << "Dog constractor" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog &dog)
{
	std::cout << "default copy constractor Dog" << std::endl;
	type = dog.getType();
}

Dog::~Dog()
{
	std::cout << "Dog destractor" << std::endl;
}

Dog& Dog::operator=(Dog &dog)
{
    std::cout << "Copy assignment operator called" << std::endl;
    type = dog.getType();
    return *this;
}

void Dog::set(std::string name)
{
	type = name;
}

void Dog::makeSound() const
{
	std::cout << "dog sound!" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}
