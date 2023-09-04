#include "Bureaucrat.h"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constractor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat):name(bureaucrat.getName()),grade(bureaucrat.getGrade())
{
	std::cout << "Default copy constractor" << std::endl;
}

Bureaucrat::Bureaucrat(int grad, const std::string nam):name(nam),grade(grad)
{
	if (grad < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grad > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
	std::cout << "Copy assignment operator called" << std::endl;
	grade = bureaucrat.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destractor bureaucrat call" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::decrement()
{
	if ( grade >= 150 )
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::increment()
{
	if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form const & form)
{
	if (form.GetIndicator())
		std::cout << this->getName() << "executed " << form.GetName() << std::endl;
	else
		std::cout << "form is not executed" << std::endl;
}
