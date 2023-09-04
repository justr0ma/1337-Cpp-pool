#include "Brain.h"

Brain::Brain()
{
    std::cout << "brain constractor" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "justr0ma";
        i++;
    }
}

Brain::Brain(Brain &brain)
{
	std::cout << "default copy constractor brain" << std::endl;
	int i = 0;
	while (i < 100)
	{
		ideas[i] = brain.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(Brain &brain)
{
    std::cout << "Copy assignment operator called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		ideas[i] = brain.ideas[i];
		i++;
	}
    return *this;
}

Brain::~Brain()
{
    std::cout << "brain descractor" << std::endl;
}

//std::string Brain::getidais(int key)
//{
//    std::cout << ideas[key] << std::endl;
//    return (ideas[key]);
//}
//
//void Brain::setidais(std::string idea)
//{
//    ideas[i++] = idea;
//}
