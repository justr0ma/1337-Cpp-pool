#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal &animal);
    Animal& operator=(Animal &animal);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const{};
};
