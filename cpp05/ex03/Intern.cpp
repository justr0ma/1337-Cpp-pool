#include "Intern.h"

Intern::Intern()
{
	std::cout << "constractor intern" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Default copy Constractor" << std::endl;
	(void)intern;

}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << "Intern assignment operator" << std::endl;
	(void)intern;
	return *this;
}

Intern::~Intern()
{
	std::cout << "destractor intern" << std::endl;
}

Form* Intern::makeForm(std::string nform, std::string tform)
{
	int a = nform.compare("robotomy request") ? nform.compare("Shrubbery Creation") ? nform.compare("Presidential Pardon") ? 3 : 2 : 1 : 0;

	switch (a)
	{
	case 0:
		form = new RobotomyRequestForm(tform);
		std::cout << "Intern creates " << nform << std::endl;
		return form;
	case 1:
		form = new ShrubberyCreationForm(tform);
		std::cout << "Intern creates " << nform << std::endl;
		return form;
	case 2:
		form = new PresidentialPardonForm(tform);
		std::cout << "Intern creates " << nform << std::endl;
		return form;
	default:
		throw Intern::InternException();
	}
}
