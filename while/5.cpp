#include <iostream>
//подсчет количества цифр;
int main()
{
int n = 987654;
int count = 0;
   while(n > 0)
     {

       n=n/10;
       ++count;

     }

std::cout << count;

return 0;
}
