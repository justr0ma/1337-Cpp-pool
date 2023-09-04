#include "Dog.h"

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat &cat);
    Cat& operator=(Cat &cat);
    ~Cat();
    void set(std::string name);
    std::string getType() const;
    void makeSound()const ;
};
