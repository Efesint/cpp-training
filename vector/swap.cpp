#include <iostream>
#include <vector>

int main()
{
std::vector<int> v1 = {1, 2, 3};
std::vector<int> v2 = {99, 88, 77};
v1.swap(v2);
	for(int i = 0; i < v1.size(); ++i)
	{
           std::cout << v1[i] << " ";
	} 
std::cout << std::endl;
        for(int i = 0; i < v2.size(); ++i)
	{
          std::cout << v2[i] << " ";
	}


return 0;
}

~/
