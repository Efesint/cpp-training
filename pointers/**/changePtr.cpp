#include <iostream>

void changePtr(int** pp)  // принимает адрес указателя
{
    *pp = new int(100);   // меняет сам указатель
}

int main()
{
    int* p = new int(5);   // p указывает на 5
    changePtr(&p);         // передаём адрес указателя
    // теперь p указывает на 100
  return 0;
}
