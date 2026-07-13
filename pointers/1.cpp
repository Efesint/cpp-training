#include <iostream>

int main()
{
int apple = 42;
std::cout << apple << std::endl;
std::cout << &apple << std::endl;

int* pApple = &apple;
std::cout << pApple;
std::cout << std::endl;

std::cout << *pApple;

*pApple = 100;
std::cout << std::endl;
std::cout << apple;

return 0;
}
