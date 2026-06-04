#include <iostream>

int multiply(int a, int b)
{
int result = 0;
       for(int i = 0; i < b; ++i)
       {
          result +=a;
       }
return result;
}


int main()
{

int result = multiply(6, 7);
std::cout << result;


return 0;
}
