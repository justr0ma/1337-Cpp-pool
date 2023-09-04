#include "RobotomyRequestForm.h"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string nm);
    PresidentialPardonForm(PresidentialPardonForm &presidential);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& presidential);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor);
};
