#include <iostream>
#include "Brain.h"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &animal);
	Animal& operator=(Animal &animal);
	virtual ~Animal();// {std::cout << "Animal destractor" << std::endl;};
	virtual std::string getType() const;
	virtual void makeSound() const{};
	virtual void set(){};
};
