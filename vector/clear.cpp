#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {1, 2, 3, 4, 5};
std::cout << v.size() << std::endl;
v.clear();
std::cout << v.size() << std::endl;



return 0;
}

