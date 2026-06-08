#include <iostream>

int factorial(int n)
{
int result = 1;
	for(int i = 1; i <=n; ++i)
	  {          
	   result*=i;
	  }
return result;
}


int main()
{
int y;
std::cout << "Введи число которое нужно возвести в факториал" << std::endl;
std::cin >> y;
int x = factorial(y);
std::cout << x;


return 0;	
}
