#include <iostream>
#include <random>
// угадать число, которое загадал компьютер.

int main() {
std::cout << "Угадай число, которое загадал компьютер" << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    int secret = dist(gen); 
    int guess = 0;
    int attempts = 0;

      while(guess != secret)
        {

           std::cin >> guess;
           ++attempts;
              if(guess < secret)
                {
                    std::cout << "больше" << std::endl;

                }

                   else if(guess > secret)
                {
                    std::cout << "меньше" << std::endl;

                } 
                        else if(guess == secret)
                {
                    std::cout << "Угадал!Попыток: " << attempts << std::endl;

                }
        
         }
        

    return 0;
}
