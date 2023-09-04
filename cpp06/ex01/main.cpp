#include <iostream>
#include <cstdint>

struct Data
{
  int a;
};

uintptr_t serialize(Data* ptr)
{
  return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data *>(raw);
}

int main()
{
  Data *l = new Data;
  l->a = 3;
  std::cout << l->a << std::endl;
  uintptr_t p = serialize(l);
  deserialize(p);
  std::cout << l->a << std::endl;
}
