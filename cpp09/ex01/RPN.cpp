#include "RPN.hpp"

RPN::RPN(std::string value)
{
    int i = 0;
    while (value[i])
    {

        if (isdigit(value[i]))
            rpn_stack.push(value[i] - 48);
        else if (value[i] == '+' || value[i] == '/' || value[i] == '*' || value[i] == '-')
        {
            if (rpn_stack.size() < 2)
            {
                std::cout << "Error" << std::endl;
                return;
            }
            else
            {
                float b = rpn_stack.top();
                rpn_stack.pop();
                float a = rpn_stack.top();
                rpn_stack.pop();
                if (value[i] == '-') rpn_stack.push(a - b);
                if (value[i] == '+') rpn_stack.push(a + b);
                if (value[i] == '*') rpn_stack.push(a * b);
                if (value[i] == '/')
                {
                    if (b == 0)
                    {
                        std::cout << "Error" << std::endl;
                        return;
                    }
                    rpn_stack.push(a / b);
                }
            }
            
        }
        else if (value[i] != ' ')
        {
            std::cout << "Error" << std::endl;
            return;
        }
        i++;
    }
    if (rpn_stack.size() > 1 || rpn_stack.size() == 0)
    {
        std::cout << "Error" << std::endl;
        return;
    }
    std::cout << rpn_stack.top() << std::endl;
}

RPN::~RPN()
{
}