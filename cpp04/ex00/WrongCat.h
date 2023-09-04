#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat &cat);
    WrongCat& operator=(WrongCat &wrongcat);
    ~WrongCat();
    void set(std::string name);
    void makeSound();
};
