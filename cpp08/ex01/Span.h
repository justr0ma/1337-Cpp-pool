#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<double> spn;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &cpy);
        Span& operator=(const Span &span);
        ~Span();
        void addNumber(double n);
        void addrange();
        double shortestSpan();
        double longestSpan();
};
