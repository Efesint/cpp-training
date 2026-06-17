#include <iostream>
#include <vector>

int main()
{
std::vector<int> v;
if(v.empty())
{
 std::cout << "empty" << std::endl;
} else {
  std::cout << "not empty" << std::endl;
}
v.push_back(42);

if(v.empty())
{
 std::cout << "empty" << std::endl;
} else {
  std::cout << "not empty" << std::endl;
}
return 0;
}

