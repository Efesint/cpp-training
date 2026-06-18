#include <iostream>
#include <string>

int main()
{
std::string s = "i like cats";
s.replace(7,4, "dogs");// 7 - индекс откуда заменять. 4 - сколько символов будет
		       //заменено
std::cout << s;

return 0;
}

