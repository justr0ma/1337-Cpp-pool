#include "Animal.h"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog &dog);
	Dog& operator=(Dog &dog);
	~Dog();
	void set();
	std::string getType() const;
	void makeSound() const;
};
