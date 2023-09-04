#include "Bureaucrat.h"

std::ostream& operator<< (std::ostream& output, Bureaucrat& b)
{
    output << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return output;
}

int main()
{
    try{
        Bureaucrat bureaucrat(42, "malta");

        std::cout << bureaucrat;
        bureaucrat.increment();
        std::cout << bureaucrat;
    }
    catch (Bureaucrat::GradeTooLowException &e){
        std::cout << e.what() << std::endl;
    }
}
