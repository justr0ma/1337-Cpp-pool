#include <iostream>
#include "Brain.h"

class Animal 
{
protected:
    std::string type;
    Animal();
    Animal(Animal &animal);
public:
    Animal& operator=(Animal &animal);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};
