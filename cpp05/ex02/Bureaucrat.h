
#ifndef BUREAUCRAT_H_
# define BUREAUCRAT_H_

# include <iostream>
# include <string>
# include <exception>
#include "Form.h"
class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade; //150 to 1
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat &bureaucrat);
	Bureaucrat(int grad, std::string nam);
	Bureaucrat& operator=(Bureaucrat &bureaucrat);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &form);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
	};
};
#endif