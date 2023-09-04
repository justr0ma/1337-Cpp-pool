#include "Cat.h"

Cat::Cat()
{
	std::cout << "CAT constractor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat &cat)
{
	std::cout << "default copy constractor Cat" << std::endl;
	brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		(*this).brain->ideas[i] = (cat).brain->ideas[i];
		i++;
	}
	//*this = cat;
	type = cat.getType();
}

Cat& Cat::operator=(Cat &cat)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this->brain)
		delete this->brain;
	brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		(*this).brain->ideas[i] = (cat).brain->ideas[i];
		i++;
	}
    type = cat.getType();
    return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "CAT destractor" << std::endl;
}

void Cat::set()
{
	int i = 0;
	while (i < 100)
	{
		(*this).brain->ideas[i] = "catvon";
		i++;
	}
}

void Cat::makeSound() const
{
	std::cout << "cat sound!" << std::endl;
}

std::string Cat::getType() const
{
	std::cout <<brain->ideas[0] << std::endl;
	return (type);
}
