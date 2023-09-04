#include "Bureaucrat.h"

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
        Bureaucrat bure(13, "malta");
        std::cout << bure;
        Form form("r0ma", 62, 44);
        std::cout << form;
        form.beSigned(bure);
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}
