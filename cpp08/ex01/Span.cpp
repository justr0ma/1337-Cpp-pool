#include "Span.h"
#include <numeric>

Span::Span()
{
}

Span::Span(unsigned int n)
{
	N = n;
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span& Span::operator=(const Span &span)
{
	N = span.N;
	spn = span.spn;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(double n)
{
	try
	{
		if (spn.size() >= N)
			throw (N);
		spn.__emplace_back(n);
	}
	catch(const unsigned int e)
	{
		std::cerr << "max size is : " << e << '\n';
	}
}

double Span::shortestSpan()
{
	double shortspn = -1;
	try
	{
		if(spn.size() <= 1)
			throw(N);
		std::vector<double> cpy(spn);
		sort(cpy.begin(), cpy.end());
		double tmp;
		unsigned long i = 0;
		while (i < cpy.size() - 1)
		{
			tmp = cpy.at(i) - cpy.at(i + 1);
			if (tmp < 0)
				tmp *= -1;
			if (shortspn > tmp || shortspn == -1)
				shortspn = tmp;
			i++;
		}
	}
	catch(const unsigned int e)
	{
		std::cerr << "no span can be found " << e << '\n';
	}
	return shortspn;
}

double Span::longestSpan()
{
	double longspn = -1;
	try
	{
		if(spn.size() <= 1)
			throw(N);
		std::vector<double> cpy(spn);
		sort(cpy.begin(), cpy.end());
		longspn = cpy.at(cpy.size() - 1) - cpy.at(0);
	}
	catch(const unsigned int e)
	{
		std::cerr << "no span can be found " << e << '\n';
	}
	return longspn;
}

void Span::addrange()
{
	std::vector<double> sp(N);
	std::iota(sp.begin(), sp.end(), 1);
    //for (int &i: sp){
    //    std::cout << i << ' ';
    //}
	//std::cout << std::endl;
	spn = sp;
}
