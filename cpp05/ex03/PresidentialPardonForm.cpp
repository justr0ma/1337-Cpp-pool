#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Defaulst constractor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string nm) : Form(nm, 25, 5)
{
    std::cout << "default parametrase constractor" << std::endl;
	//if (GetGradeSign() == 25 && GetGradeExecute() == 5)
	//	std::cout << GetName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidential) : Form(presidential.GetName(), presidential.GetGradeSign(), presidential.GetGradeExecute())
{
    std::cout << "Default copy Constractor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidential)
{
	std::cout << "Presidential assignment operator" << std::endl;
	(void)presidential;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "destractor PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (!GetIndicator() || executor.getGrade() > GetGradeExecute())
        throw Bureaucrat::GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
