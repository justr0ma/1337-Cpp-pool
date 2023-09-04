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
    Form(std::string nm, int gs, int ge);
    Form(Form &form);
    Form &operator=(Form &form);
    ~Form();
    std::string GetName();
    bool GetIndicator();
    int GetGradeSign();
    int GetGradeExecute();
    void beSigned(Bureaucrat& bureac);
};

#endif