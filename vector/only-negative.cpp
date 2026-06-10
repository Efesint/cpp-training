#include <iostream>
#include <vector>

int main()
{
std::vector<int> v = {3, -5, 8, -2, 0, 7, -1};
std::vector<int> v1;
for(int i = 0; i < v.size(); ++i)
{
  if(v[i] < 0)
  {
    v1.push_back(v[i]);
  }
}

for(int j = 0; j < v1.size(); ++j)
{
  std::cout << v1[j] << " ";
}

return 0;
}
