#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &wronganimal);
    ~WrongAnimal();
    WrongAnimal& operator=(WrongAnimal &wronganimal);
    std::string getType() const;
    void makeSound();
};

