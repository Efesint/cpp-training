#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
  for(int i = 0; i < v.size(); ++i)
  {
    std::cout << v[i] << " ";
  }

}


int main()
{
std::vector<int> v = {7, 14, 21, 28, 35};
print_vector(v);



return 0;
}
