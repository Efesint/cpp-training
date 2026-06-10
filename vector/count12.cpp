#include <iostream>
#include <vector>

int main()
{
int count = 0;
std::vector<int> v = {8, 12, 15, 12, 8, 20, 12};
for(int i = 0; i < v.size(); ++i)
{
  if(v[i] == 12)
  {
    ++count;
  }
}

std::cout << count;

return 0;
}
