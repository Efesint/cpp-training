#include <iostream>
//все делители числа 24
int main()
{
   for(int i = 1; i <= 24; ++i)
    {

        if(24 % i == 0)
	  {

             std::cout << i << " ";
	  
	  }

    }


return 0;
}

