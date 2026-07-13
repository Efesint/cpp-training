#include <iostream>

int main()
{
//new and delete 
int* p = new int; //у динамической переменной нет имени, ток указатель p

// work with p
*p = 5; // присваивание динамической переменне число 5

std::cout << *p << std::endl;


// delete

delete p;
;
return 0;
}
