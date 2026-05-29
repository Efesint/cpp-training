#include <iostream>
//пароль;
int main()
{
int passwd = 1234;
int x;
   do{

       std::cout << "Введи пароль ";
       std::cin >> x;

   } while (x != 1234);
std::cout << "Access granted";

return 0;
}
