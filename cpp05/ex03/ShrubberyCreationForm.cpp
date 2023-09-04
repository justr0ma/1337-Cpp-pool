#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "default constractor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string nm) : Form(nm, 145,137)
{
    std::cout << "default parametrase constractor" << std::endl;
    //if (GetGradeSign() == 145 && GetGradeExecute() == 137)
    //{
    //    execute();
    //}
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shroubery) : Form(shroubery.GetName(), shroubery.GetGradeSign(), shroubery.GetGradeExecute())
{
    std::cout << "Default copy Constractor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shroubery)
{
	std::cout << "Shrubbery assignment operator" << std::endl;
    (void)shroubery;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "destractor ShrubberyCreationForm call" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (!GetIndicator() || executor.getGrade() > GetGradeExecute())
        throw Bureaucrat::GradeTooLowException();
    std::fstream file;
    file.open(executor.getName().append("_shrubbery"), std::ios::out);
    if (file.is_open())
    {
        file << " 000000" << std::endl;
        file << " 000000" << std::endl;
        file << "   11     " << std::endl;
        file << "   11     " << std::endl;
    }
}
