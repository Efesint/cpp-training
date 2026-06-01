#include <iostream>
//ввод чисел задом наперед;
int main()
{
int n = 12345;
     while(n > 0)
      {

       std::cout << n % 10 << " ";
       n=n/10;

      }


return 0;
}
