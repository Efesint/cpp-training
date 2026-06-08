#include <iostream>
//возвращение большего числа
      int max(int a, int b)
        {
          if(a > b)
	   {
             return a;
	   }
	   else
	   {
	    return b;
	   }
        
         }

int main()
{

int result = max(42,17);
std::cout << result;


return 0;
}
