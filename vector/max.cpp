#include <iostream>
#include <vector>

int main()
{

std::vector<int> v = {14, 7, 22, 5, 31, 18};
int max = 0; 
for(int i = 0; i < v.size(); ++i)
{
  if(v[i] > max)
  {
    max = v[i];
  }
} 
std::cout << max;

return 0;
}
