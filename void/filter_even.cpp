#include <iostream>
#include <vector>

void filter_even(std::vector<int>& v)
{
std::vector<int> temp;
  for(int i = 0; i < v.size(); ++i)
  {
    if( v[i] % 2 == 0)
    {
      temp.push_back(v[i]); 
    }
  }
  v = temp;
}


int main()
{
std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
filter_even(v);

for(int i = 0; i < v.size(); ++i)
{
   std::cout << v[i] << " ";
}

return 0;
}

