#include "Cat.h"

int main()
{
    const Animal* an[2];
    an[0] = new Dog();
    an[1] = new Cat();
    //const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout <<i->getType() << std::endl;
    //std::cout <<j->getType() << std::endl;
    //delete j;//should not create a leak
    delete  an[0];
    delete an[1];
    delete i;
return 0;
}
