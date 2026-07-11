//Задание 1. Базовая работа со ссылкой
//Напиши программу, которая:
   // Объявляет int x = 100;
    //Создает ссылку ref на x
   // Выводит x и ref
   // Меняет ref = 200;
    //Снова выводит x и ref (оба должны стать 200)
   // Меняет x = 300;
  //  Выводит ref (должно быть 300)
#include <iostream>

int main()
{
int x = 100;
int& ref = x;
std::cout << x << " " << ref << std::endl;
ref = 200;
std::cout << x << " " << ref << std::endl;
x = 300;
std::cout << ref;


return 0;
}
