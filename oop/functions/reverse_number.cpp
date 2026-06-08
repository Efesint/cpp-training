#include <iostream>

int reverse_number(int n)
{
int reversed = 0;
while(n > 0)
{
	reversed = reversed * 10 + (n % 10);
	n = n /10;
}
return reversed;
}

int main()
{
int i;
std::cin >> i;
i = reverse_number(i);
std::cout << i;
}
