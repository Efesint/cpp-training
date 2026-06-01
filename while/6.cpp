#include <iostream>
//подсчет суммы чисел в переменной
int main()
{
int n = 48291;
int x = 0;

    while(n > 0)
    {

      x+=n%10;
      n=n/10;

    }
std::cout << x;

return 0;
}
