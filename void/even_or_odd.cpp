#include <iostream>

void check_even(int n)
{
    if(n % 2 == 0)
    {
      std::cout << "even";
    } else {
      std::cout << "odd";
    }
}



int main()
{
check_even(42);


return 0;
}

