#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
for(int i = v.size() - 1; i >= 0; --i)
{
	std::cout << v[i] << " ";
}

return 0;
}
