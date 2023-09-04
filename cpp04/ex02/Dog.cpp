#include "Dog.h"

Dog::Dog()
{
	std::cout << "Dog constractor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog &dog)
{
	std::cout << "default copy constractor Dog" << std::endl;
	brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		brain->ideas[i] = (dog).brain->ideas[i];
		i++;
	}
	type = dog.getType();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destractor" << std::endl;
}

Dog& Dog::operator=(Dog &dog)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if(this->brain)
		delete this->brain;
	brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		(*this).brain->ideas[i] = dog.brain->ideas[i];
		i++;
	}
    type = dog.getType();
    return *this;
}

void Dog::set()
{
	int i = 0;
	while (i < 100)
	{
		(*this).brain->ideas[i] = "dogvon";
		i++;
	}
	type = "kkkkk";
}

void Dog::makeSound() const
{
	std::cout << "dog sound!" << std::endl;
}

std::string Dog::getType() const
{
	std::cout <<brain->ideas[0] << std::endl;
	return (type);
}
