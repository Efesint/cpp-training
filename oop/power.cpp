#include <iostream>

int power(int base, int exp)
 {
int result = 1;
    for(int i = 0; i < exp; ++i)
     {
       result = result * base;
     }
 
   return result;
 }



int main()
{
int y,z;
std::cout << "Какое число хотите возвести в степень?" << std::endl;
std::cin >> y;
std::cout << "В какую степень хотите возвести?" << std::endl;
std::cin >> z;
int x = power(y, z);
std::cout << x;


return 0;
}
