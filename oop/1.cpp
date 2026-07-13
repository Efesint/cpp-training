#include <iostream>
#include <string>

class Car
  {
    public:
    std::string name;

    void rename(const std::string& new_name)
     {
       name = new_name;
     }

     void info()
     {
        std::cout << Car::name << std::endl;
     }
  };


int main()
{

Car car1;
car1.name = "kek";

std::cout << car1.name << std::endl;
car1.rename("lll");

std::cout << car1.name << std::endl;

std::cout << std::endl;
car1.info();

return 0;
}
