#include <iostream>
#include <vector>

int main()
{
int sum = 0;
std::vector<int> v = {5, 10, 15, 20, 25};

for(int i = 0; i < v.size(); ++i)
{
  sum+=v[i];
}
std::cout << sum;
return 0;
}
