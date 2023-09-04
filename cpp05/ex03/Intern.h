#include "PresidentialPardonForm.h"

class Intern
{
private:
	Form *form;
public:
	Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);
	~Intern();
    Form* makeForm(std::string nform, std::string tform);

	class InternException : public std::exception {
		public:
			virtual const char* what() const throw() { return "form not created"; }
	};
};
