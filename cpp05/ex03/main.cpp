#include "Intern.h"

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
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch (Intern::InternException &e) {
        std::cout << e.what() << std::endl;
    }
}
