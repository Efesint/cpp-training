#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if (age >= 18) {
        cout << "Ура! Можно получать права!" << endl;
    } else {
        cout << "Права можно получить только с 18 лет!" << endl;
    }
    
    return 0;
}
