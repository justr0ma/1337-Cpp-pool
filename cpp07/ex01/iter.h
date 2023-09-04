#include <iostream>

template <typename T>
void justone(T& c)
{
    c += 1;
}

template <typename T1, typename T2, typename T3>
void iter(T1 &f, T2 s, T3 t)
{
    for (int i = 0; i < s; i++)
        t(f[i]);
}
