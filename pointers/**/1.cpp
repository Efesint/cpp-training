#include <iostream>

  void set999(int** pp)
   {
     **pp = 999;
   }

int main()
{
int x = 10;
int *px = &x;
int **px1 = &px;

std::cout << **px1 << std::endl;

set999(px1);

std::cout << **px1;

return 0;
}
