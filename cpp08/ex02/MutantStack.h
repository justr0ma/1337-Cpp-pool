#include <iostream>
#include <stack>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &mutantstack);
        MutantStack<T>& operator=(const MutantStack &mutantstack);
        ~MutantStack();

        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &mutantstack)
{
    *this = mutantstack;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &mutantstack)
{
    this->c = mutantstack.c;
	return *this;
}
