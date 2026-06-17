#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {10, 20, 30, 40};
v.insert(v.begin() + 2, 99);
for(int i = 0; i < v.size(); ++i)
{
 std::cout << v[i] << " ";
} 

return 0;
}

~
