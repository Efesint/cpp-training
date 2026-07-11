#include <iostream>

int main()
{
std::string name = "brr";

std::string *pName = &name;

std::cout << *pName;
//если ввести без *, то выведется адрес строки, а не то, что содержит в себе переменная

return 0;
}
