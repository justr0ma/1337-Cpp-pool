#include "PresidentialPardonForm.h"

std::ostream& operator<< (std::ostream& output, Bureaucrat& b)
{
    output << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return output;
}

std::ostream& operator<< (std::ostream& output, Form& b)
{
    output << b.GetName() << ", gradesign " << b.GetGradeSign() << " gradExecute " << b.GetGradeExecute() << " indicator " << b.GetIndicator() << std::endl;
    return output;
}

int main()
{
    try{
        Bureaucrat bure(4, "malta");
        std::cout << bure << std::endl;

        PresidentialPardonForm form("r0ma");
        std::cout << form;
        form.beSigned(bure);
        form.execute(bure);

        bure.decrement();
        std::cout << bure << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}
