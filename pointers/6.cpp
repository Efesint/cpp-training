#include <iostream>

int main()
{
int x = 432;

int* p1 = &x;
// выводит значение указателя (x = 432)
std::cout << *p1 << std::endl;

// заменяем х на любое число
*p1 = 243;

std::cout << x;
return 0;
}
