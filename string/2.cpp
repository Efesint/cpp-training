#include <iostream>
#include <string>

int main()
{
int count = 0;
	std::string s = "programming";

	for(int i = 0; i < s.size(); ++i)
	{
          if(s[i] == 'm')
	  {
             ++count;
	  } 
	}
	std::cout << count;

return 0;
}
