#include "ShrubberyCreationForm.h"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string nm);
    RobotomyRequestForm(RobotomyRequestForm &robotomy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomy);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor);
};
