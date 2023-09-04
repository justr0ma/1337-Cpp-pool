#include "Base.hh"

Base*	generate()
{
	srand(time(0));
	int a = rand() % 3;
	std::cout << a << std::endl;
	if (a == 0)
	{
		A *a = new(A);
		std::cout << "just A" << std::endl;
		return a;
	}
	else if (a == 1)
	{
		B *b = new(B);
		std::cout << "just b" << std::endl;
		return b;
	}
	else
	{
		C *c = new(C);
		std::cout << "just c" << std::endl;
		return c;
	}
}

void identify(Base* p)
{
	if (A *d = dynamic_cast<A*>(p))
	{
		std::cout << "justr0ma a" << std::endl;
	}
	if (B *s = dynamic_cast<B*>(p))
	{
		std::cout << "justr0ma b" << std::endl;
	}
	if (C *a = dynamic_cast<C*>(p))
	{
		std::cout << "justr0ma c" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A &d = dynamic_cast<A&>(p);
		(void)d;
		std::cout << "just from A" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		B &s = dynamic_cast<B&>(p);
		(void)s;
		std::cout << "just from B" << std::endl;
	}
	catch(const std::exception& ke)
	{
		//std::cerr << ke.what() << '\n';
	}
	try
	{
		C &a = dynamic_cast<C&>(p);
		(void)a;
		std::cout << "just from C" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
}

int main()
{
	Base *abc = generate();
	//identify(abc);
	identify(*abc);
}
