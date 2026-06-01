#include <iostream>
//проверка на палиндром;
int main()
{
int n = 12321;
int original = n;
int reversed = 0;
     while(n > 0)
      {

        int digit = n % 10;
	reversed = reversed * 10 + digit;
	n = n/10;

      }

       if(original == reversed)
         {

            std::cout << "yes";

	 }
       else if(original != reversed)
         {

            std::cout << "no";

	 }


return 0;
}
