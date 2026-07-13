#include <iostream>

int main()
{
int* p = (int*)100;

// 100 + 4 байт = 104 бита. п = 104
// char = 1 байт
// инт - 4 байт
// дабл = 8 байт
p = p + 1;

std::cout << (size_t)p << std::endl;


return 0;
}
