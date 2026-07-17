#include <iostream>

  void replace(int** pp)
   {
     delete *pp;
     *pp = new int(777);
   }

int main()
{
int* p = new int(5);
int** pp = &p;

std::cout << **pp << std::endl;

replace(pp);

std::cout << **pp << std::endl;

return 0;
}
