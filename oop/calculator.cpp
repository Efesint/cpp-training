#include <iostream>

  class Math
   { 
   public:
    Math(int x, int y)
     {
       one = x;
       two = y;
     }

    int add()
     {
       int res=one+two;
       std::cout << res;
       return res; 
     }
     int subtraction()
      {
        int res=one-two;
	std::cout << res;
	return res;
      }
     int multiplication()
      {
        int res=one*two;
	std::cout << res;
	return res;
      }
     int division()
      {
        int res = one/two;
	std::cout << res;
	return res;
      }
    private:
    int one; int two;

   };


int main()
{
Math a(100,5);
a.add();
std::cout << std::endl;
a.subtraction();
std::cout << std::endl;
a.multiplication();
std::cout << std::endl;
a.division();

return 0;
}
