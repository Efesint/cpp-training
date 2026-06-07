#include <iostream>
#include <string>
int main(){
  double x, y, q, w;
  std::string z;
  q = 100;
  w= 99,9;
  std::cout << "Это конвектор валют из рублей, во что будем переводить?" << std::endl;
  std::cin >> z;
  std::cout << "Сколько рублей перевести?" << std::endl;
  std::cin >> x;
  if (z == "euro"){
    std::cout << "Result:" << x/q << std::endl;
  }
  else if (z == "dollar"){
    std::cout << "Result:" << x/w << std::endl;
  }
  else {
    std::cout << "Введите dollar или euro";
  }
}
