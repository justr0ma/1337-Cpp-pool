#include "Form.h"

Form::Form():gradeSign(0),gradeExecute(0)
{
    std::cout << "Default constractor Form" << std::endl;
}

Form::Form(std::string nm, int gs, int ge) : name(nm), gradeSign(gs), gradeExecute(ge)
{
    std::cout << "just constractor form"<< std::endl;
}

Form::Form(Form &form):name(form.GetName()),gradeSign(GetGradeSign()),gradeExecute(GetGradeExecute())
{
    std::cout << "Default copy constractor" << std::endl;
}

Form &Form::operator=(Form &form)
{
	std::cout << "Copy assignment operator called" << std::endl;
	indicator = form.GetIndicator();
	return *this;
}

Form::~Form()
{
    std::cout << "destractor form call" << std::endl;
}

std::string Form::GetName() const
{
    return name;
}

bool Form::GetIndicator()const
{
    return indicator;
}

int Form::GetGradeSign()
{
    return gradeSign;
}

int Form::GetGradeExecute()
{
    return gradeExecute;
}

void Form::beSigned(Bureaucrat& bureac)
{
	if (bureac.getGrade() > gradeSign)
    {
        std::cout << bureac.getName() << " can't sign " << name << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        std::cout << bureac.getName() << " has signed " << name << std::endl;
        indicator = true;
    }
}
