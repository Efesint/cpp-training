#include <iostream>
#include <vector>

int main()
{

	std::vector <int> v = {23, 5, 87, 12, 45, 3, 76, 34};
	int min = v[0];
          for(int i = 0; i < v.size(); ++i)
	  {
           if(min > v[i])
	   {
             min=v[i];
	   }  
	  }

std::cout << min;

return 0;
}
