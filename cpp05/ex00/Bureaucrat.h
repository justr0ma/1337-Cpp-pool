#include <iostream>

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
    std::string getName();
    int getGrade();
    void increment();
    void decrement();

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
};
