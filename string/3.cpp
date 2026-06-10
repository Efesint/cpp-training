#include <iostream>
#include <string>

int main()
{
int count = 0;
	std::string s = "hello world";
	for(int i = 0; i < s.size(); ++i)
            {
               if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                 {
	            ++count;
                  }
	    } 
std::cout << count;

return 0;
}
