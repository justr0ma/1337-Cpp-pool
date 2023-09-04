#include <iostream>
#include <stack>

class RPN
{
private:
    std::stack<float> rpn_stack;
public:
    RPN(std::string value);
    ~RPN();
};
