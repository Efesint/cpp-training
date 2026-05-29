#include <iostream>
int main()
//подсчет всех чисел в числе n;
{
int n = 2021;
int count = 0;
   while(n > 0)
    {

      n=n/10;
      count++;

    }
std::cout << count;

return 0;
}
