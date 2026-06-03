#include <iostream>
//сумма кратных семи
int main()
{
int result = 0;
    for(int i = 1;i < 1000; ++i)
      {

         if(i % 7 == 0)
	  {
            result+=i;
	  }
      }

    std::cout << result;

return 0;
}
