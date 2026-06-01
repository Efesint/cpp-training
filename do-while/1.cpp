#include <iostream>
//ввод числа от 1 до 10 и возведение его в квадрат;
int main()
{
int n;
   do{
       std::cout << "Введите число от 1 до 10" << std::endl;
       std::cin >> n;

     }while(n > 10 || n < 1); 
 
std::cout << n*n;

return 0;
}
ano
