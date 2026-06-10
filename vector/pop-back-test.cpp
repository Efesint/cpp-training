#include <iostream>
#include <vector>

int main()
{

std::vector<int> v = {10, 20, 30, 40, 50};
v.pop_back();
for(int i = 0; i < v.size(); ++i)
{
  std::cout << v[i] << " ";
}

return 0;
}
