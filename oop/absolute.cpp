#include <iostream>
//возведение числа в модуль;
int absolute(int n)
{
if(n < 0)
{
  n=n*-1;
}
return n;
}


int main()
{

int result = absolute(-42);
std::cout << result;

return 0;
}
