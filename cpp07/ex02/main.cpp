#include "Array.h"

int main()
{
    try
    {
        Array<int> n(4);
        Array<int> a;
        a = n;
        a[0] = 8;
	    for(unsigned int i = 0;i < 4;i++)
	    	std::cout << a[i] << std::endl;
        std::cout << a.size() << " size" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
