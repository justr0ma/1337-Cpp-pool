#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int len;
	T *a;
public:
	Array();
	Array(unsigned int n);
	Array(Array &array);
	Array<T>& operator=(Array &array);
	~Array();
	int& operator[](unsigned int index);
	int size();
};

template <typename T>
Array<T>::Array()
{
	len = 0;
	a = new T[len];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	len = n;
	a = new T[len];
	for(unsigned int i = 0;i < len;i++)
		a[i] = 2;
}

template <typename T>
Array<T>::Array(Array &array)
{
	std::cout << "default copy constractor" << std::endl;
	len = array.len;
	a = new T[len];
	for(unsigned int i = 0;i < len;i++)
		a[i] = array.a[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array &array)
{
	std::cout << "assignment operator called" << std::endl;
	len = array.len;
	//a = new T[len];
	for(unsigned int i = 0;i < len;i++)
		a[i] = array.a[i];
	return *this;
}

template <typename T>
int& Array<T>::operator[](unsigned int index)
{
    if (index >= len)
		throw std::out_of_range("out of range");
    return a[index];
}

template <typename T>
int Array<T>::size()
{
	return len;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "destractor call" << std::endl;
	delete [] a;
}
