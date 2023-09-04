#ifndef FORM_H_
# define FORM_H_

# include <iostream>
# include <string>
# include <exception>
#include "Bureaucrat.h"
class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool indicator;
    const int gradeSign;
    const int gradeExecute;

public:
    Form();
    Form(std::string nm, int gs, int ge);
    Form(Form &form);
    Form &operator=(Form &form);
    virtual ~Form();
    std::string GetName()const;
    bool GetIndicator()const;
    int GetGradeSign();
    int GetGradeExecute();
    void beSigned(Bureaucrat& bureac);
    virtual void execute(Bureaucrat const & executor) = 0;
};

#endif
