#include "Dog.h"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(Cat &cat);
    Cat& operator=(Cat &cat);
    ~Cat();
    void set();
    std::string getType() const;
    void makeSound() const;
};
