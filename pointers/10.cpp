#include <iostream>
// перебор всех чисел в массиве с помощью указателей.


int main()
{
  int a[4] = {5, 7, 0, 4};
  for(int i = 0; i < 4; ++i)
  {
    std::cout << *(a+i) << " ";
  }

return 0;
}
