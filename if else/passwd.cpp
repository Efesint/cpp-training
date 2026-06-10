#include <iostream>
#include <string>
using namespace std;

int main(){
    string password;
    cin >> password;
    if(password == "password"){
        cout << "Верный пароль!";
    }
    else{
        cout << "Неверный пароль!";
    }
    return 0;
}
