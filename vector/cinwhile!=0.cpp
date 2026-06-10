#include <iostream>
#include <vector>

int main()
{

std::vector <int> v;

int x;
std::cin >> x;
for(int i = 0; x != 0; ++i)
{
   v.push_back(x);
   std::cin >> x;

}
for(int j = 0; j < v.size(); ++j)
{
  std::cout << v[j] << " ";
}

return 0;
}
