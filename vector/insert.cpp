#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {10, 20, 30};
v.insert(v.begin(),99);
for(int i = 0; i < v.size(); ++i)
{
 std::cout << v[i] << " ";
}

return 0;
}

