#include <iostream> 
#include <string>
int main(){
    double x, y;
    std::string z, c;
    std::cout << "Это конвектор из разных величин измерения. cm, m, mm, km" << std::endl;
    std::cout << "первое значение" << std::endl;
    std::cin >> x;
    std::cout << "Откуда переводить. cm m mm km" << std::endl;
    std::cin >> z;
    std::cout << "Куда переводить. cm m mm km" << std::endl;
    std::cin >> c;

    // перевод от сантиметров

    if (z == "cm" && c == "m"){
    std::cout << "Result:" << x/100 << std::endl;
    }
    else if (z == "cm" && c == "mm"){
      std::cout << "Result:" << x*10 << std::endl;
      }
    else if(z == "cm" && c == "km"){
      std::cout << "Result:" << x/100000 << std::endl;
    }

   //перевод от метров

    else if (z == "m" && c == "cm"){
      std::cout << "Result:" << x*100 <<std::endl;
    }
    else if (z == "m" && c == "mm"){
      std::cout << "Result:" << x*1000 << std::endl;
    }
    else if (z == "m" && c == "km"){
      std::cout << "Result:" << x/1000 << std::endl;

    }

    //перевод от милиметров 
   
    else if (z == "mm" && c == "cm" ){
      std::cout << "Result:" << x/10 << std::endl;
    }
    else if (z == "mm" && c == "m"){
      std::cout << "Result:" << x/1000 << std::endl;
    }
    else if (z == "mm" && c == "km"){
      std::cout << "Result:" << x/1000000 << std::endl;
    }
   
   //перевод от километров

   else if (z == "km" && c == "cm"){
     std::cout << "Result:" << x*100000 << std::endl;
   }
   else if (z == "km" && c == "mm"){
     std::cout << "Result:" << x*1000000 << std::endl;
   }
    else if (z == "km" && c == "m"){
      std::cout << "Result:" << x*1000 << std::endl;
    }
  }
