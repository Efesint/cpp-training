#include <iostream>
#include <vector>

int main()
{

std::vector<int> x;

for(int i = 1; i <= 20; ++i)
{
  if(i % 2 ==0)
  {
    x.push_back(i);
  }
}

for(int j = 0; j < x.size(); ++j)
{
  std::cout << x[j] << " ";
}

return 0;
}
