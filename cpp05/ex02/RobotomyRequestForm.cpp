#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Defautl constractor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string nm) : Form(nm, 72, 45)
{
    std::cout << "default parametrase constractor" << std::endl;
    //if (GetGradeSign() != 72 || GetGradeExecute() != 45)
    //    std::cout << "robotomy failed" << std::endl;
    //else
    //    std::cout << GetName() <<" robotomized successfully 50\% of the time" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomy) : Form(robotomy.GetName(), robotomy.GetGradeSign(), robotomy.GetGradeExecute())
{
    std::cout << "Default copy Constractor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomy)
{
	std::cout << "Robotomy assignment operator" << std::endl;
    (void)robotomy;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "destractor RobotomyRequestForm" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (!GetIndicator() || executor.getGrade() > GetGradeExecute())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "robotomy executer" << std::endl;
    int i = executor.getGrade() / 2;
	if (executor.getGrade()  == i * 2)
		std::cout << executor.getName() << " has been robotomized successfully 50\% of the time" << std::endl;
	else
		std::cout << executor.getName() << " robotomy failed "  << std::endl;
}
