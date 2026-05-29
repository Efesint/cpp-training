#include <iostream>
int main()
#сколько раз можно поделить 64 на 2;
{
int n = 64;
int steps = 0;
  while(n >= 1)
   {

    n= n/2;
    
    ++steps;
   }

std::cout << steps;
return 0;
}
