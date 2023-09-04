#include "Form.h"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string nm);
    ShrubberyCreationForm(ShrubberyCreationForm &shroubery);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shroubery);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor);
};
