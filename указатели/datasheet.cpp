#include <iostream>
using namespace std;

int main() {
    // 1. Обычная переменная
    int value = 42;
    cout << "Значение: " << value << ", Адрес: " << &value << endl;

    // 2. Указатель
    int* ptr = &value;       // Объявили и записали адрес
    cout << "ptr хранит адрес: " << ptr << endl;
    cout << "По адресу лежит: " << *ptr << endl; // Разыменовали

    // 3. Меняем через указатель
    *ptr = 100;
    cout << "Теперь value = " << value << endl; // 100

    // 4. Динамический int (осторожно!)
    int* dynamicInt = new int(777);
    cout << "Динамическое значение: " << *dynamicInt << endl;
    delete dynamicInt;       // Обязательно освободить!
    dynamicInt = nullptr;    // Обнулить!

    return 0;
}
