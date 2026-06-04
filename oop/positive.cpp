#include <iostream>

bool is_positive(int n)
{
  if(n > 0)
   {
     return true;
   } else{
     return false;
   }
  

}

int main()
{
 if(is_positive(-5))
	{
          std::cout << "positive";
	} else {
          std::cout << "not positive";
	}


return 0;
}
