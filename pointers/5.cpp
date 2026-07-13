#include <iostream>

int main()
{
  int x = 42;
  float y = 3.14;

  int* p1 = &x;
  float* p2 = &y;

  std::cout << p1 << " " << p2;
  std::cout << std::endl;
  std::cout << *p1 << " " << *p2;


return 0;
}
