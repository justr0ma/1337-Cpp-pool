#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constractor" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &wronganimal)
{
	std::cout << "default copy constractor WrongAnimal" << std::endl;
	type = wronganimal.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destractor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &wronganimal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	type = wronganimal.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound()
{
	std::cout << "sound of WrongAnimal" << std::endl;
}
