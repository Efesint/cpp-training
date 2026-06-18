#include <iostream>
#include <string>

int main()
{
int o = 0;
std::string s = "C++ is awesome and powerful";
for(int i = 0; i < s.size(); ++i)
{
   if(s[i] == ' ')
   {
     ++o;
   }
}

std::cout << o;

return 0;
}

