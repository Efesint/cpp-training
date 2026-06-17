#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(5);
	for(int i = 0; i < v.size(); ++i)
	{
          std::cout << v[i] << " ";
	}


return 0;
}
//#include <vector>
//#include <iostream>

//int main()
//{
//	std::vector<int> v(5, 42);

//	for(int i = 0; i < v.size(); ++i)
//	{
//          std::cout << v[i] << " ";
//	}

//return 0;
//}

