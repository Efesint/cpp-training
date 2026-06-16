#include <iostream>
#include <random>

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(1, 100);
std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";
int n;
std::cout << "Это генератор пароля. Введите длину пароля" << std::endl;
std::cin >> n;
for(int i = 0; i < n; ++i)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> x(0, chars.size() - 1);
	
int y = x(gen);
std::cout << chars[y];

}

return 0;
}
