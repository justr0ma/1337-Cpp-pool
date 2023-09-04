#include "Animal.h"

class Dog : public Animal 
{
public:
    Dog();
    Dog(Dog &dog);
    Dog& operator=(Dog &dog);
    ~Dog();
    void set(std::string name);
    std::string getType() const;
    void makeSound() const;
};
