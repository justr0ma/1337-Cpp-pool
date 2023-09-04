#include "Cat.h"
#include "WrongCat.h"

int main()
{
    //const Animal* meta = new Animal();
    const Animal* j = new Dog();
    //const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
    //i->makeSound(); //will output the cat sound!
    j->makeSound();
    //std::cout << "r0ma" << std::endl;
    //meta->makeSound();
    //WrongAnimal *w = new WrongCat();
    //std::cout << w->getType() << std::endl;
    //w->makeSound();
    delete j;
return 0;
}
