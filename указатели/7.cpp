//Задание 5. Указатели и арифметика (без массивов)
//Объяви int arr[3] = {10, 20, 30};
//Создай указатель ptr = arr;
//Выведи:
//*ptr (должен быть 10)
//*(ptr + 1) (должен быть 20)
//*(ptr + 2) (должен быть 30)
//Теперь сделай ptr = &arr[2];
// Выведи:
//*ptr (должен быть 30)
//*(ptr - 1) (должен быть 20)
//*(ptr - 2) (должен быть 10)
#include <iostream>

int main()
{

int arr[3] = {10, 20, 30};
int* ptr = arr;
std::cout << *ptr << std::endl;
std::cout << *(ptr + 1) << std::endl;
std::cout << *(ptr + 2) << std::endl;
ptr = &arr[2];
std::cout << *ptr << std::endl;
std::cout << *(ptr - 1) << std::endl;
std::cout << *(ptr - 2) << std::endl;

return 0;
}
