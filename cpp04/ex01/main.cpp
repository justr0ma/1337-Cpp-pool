#include "Cat.h"

int main()
{
	//const Animal* an[2];
	//an[0] = new Dog();
	//an[1] = new Cat();
	//std::cout << an[0]->getType() << std::endl;
	//std::cout << an[1]->getType() << std::endl;
	//delete  an[0];
	//delete  an[1];

	// std::cout << "-------------" << std::endl;
	//Animal* i = new Cat();
	Animal* j = new Dog();
	Animal *a = new Dog();
	std::cout << "-------------" << std::endl;
	*a = *j;
	std::cout << "aaa = " << a->getType() << std::endl;
	std::cout << "jjj =  " << j->getType() << std::endl;
	 a->set();
	delete j;//should not create a leak
	delete a;
	// std::cout << "aaa = " << a->getType() << std::endl;
	// std::cout << "jjj =  " << j->getType() << std::endl;
	return 0;
}