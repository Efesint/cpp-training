#include <iostream>

void changeByValue(int val)
{
  val = 999;
  std::cout << &val << std::endl;
}

void changeByPointer(int* ptr)
{
   *ptr = 777;
   std::cout << ptr << std::endl;
   std::cout << &ptr << std::endl;
}

void changeByReference(int& ref)
{
   ref = 555;
   std::cout << &ref << std::endl;
}

int main()
{
int num = 10;

std::cout << num << std::endl;

changeByValue(num);
std::cout << std::endl;
std::cout << num;
std::cout << std::endl;


changeByPointer(&num);
std::cout << std::endl;
std::cout << num;
std::cout << std::endl;

changeByReference(num);
std::cout << std::endl;
std::cout << num;
std::cout << std::endl;

std::cout << num << std::endl;

return 0;
}
