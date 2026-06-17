#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {1, 2, 3, 4, 5};
v.resize(3);
for(int i = 0; i < v.size(); ++i)
{
  std::cout << v[i] << " ";
}

v.resize(7);
std::cout << std::endl;

for(int i = 0; i < v.size(); ++i)
{
  std::cout << v[i] << " ";
}
return 0;
}

