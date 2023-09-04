#include <iostream>

template <typename T1>
void swap(T1 &f, T1 &s)
{
    T1 k;
    
    k = s;
    s = f;
    f = k;
}

template <typename T1>
T1 min(T1 f, T1 s)
{
    if (f < s)
        return f;
    return s;
}

template <typename T1>
T1 max(T1 f, T1 s)
{
    if (f > s)
        return f;
    return s;
}
