#include <iostream>
#include <random>
// угадать число за ограниченное кол-во попыток
int main()
{

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dist(1, 20);

int secret = dist(gen);
int counter = 0;
int guess = 0;

    for(int i = 1; i <= 5; ++i)
      {

       std::cin >> guess;
       
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
                   std::cout << "Ты угадал!" << std::endl;
		   break;
		 }

      }

if(guess != secret)
  {
    std::cout << "Попытки кончились" << std::endl;
  }

return 0;
}
