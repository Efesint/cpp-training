#include <iostream>

int max_of_three(int a, int b, int c)
{
  if(a >= b && a >= c)
  {
    return a;
  } 
 else if(b >= a && b >= c)
 { 
   return b;
 } else {
  return c;
}

}
int main()
{

std::cout << max_of_three(15,42,8);


return 0;
}
