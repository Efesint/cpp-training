#include <iostream>

  void func(int*& ptr)
   {
     
     delete ptr;
     ptr = nullptr;

   }
int main()
{

int* ptr = new int(5);
std::cout << ptr << std::endl;
func(ptr);
std::cout << ptr;

return 0;
}
