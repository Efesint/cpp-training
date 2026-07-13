#include <iostream>

int main()
{
int original = 50;

std::cout << original << " " << &original;
std::cout << std::endl;

int& ref = original;

std::cout << ref << " " << &ref;

ref = 99;

std::cout << std::endl << original;

original = 77;

std::cout << std::endl << ref;

return 0;
}
