#include <iostream>
//ввод чисел вплоть до сотни, счетчик вписанных чисел + итоговая сумма введёных чисел.
int main()
{
int count = 0;
int sum = 0;
int n;
     while(sum <= 100)
       {

          std::cin >> n;
	  sum+=n;
	  ++count;

       }

std::cout << sum << std::endl;;
std::cout << count;

return 0;
}
