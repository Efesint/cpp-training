#include <iostream>
//проверка на четность;
     bool is_even(int n)
      {
        if( n % 2 ==0)
          {
             return true;
           }
	 else{
          return false;
	}
       } 

int main() 
{

  if(is_even(7))
   {
     std::cout << "even";
   } else {
	   std::cout << "odd";
          }

return 0;
}
