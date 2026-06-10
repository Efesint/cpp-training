#include <iostream>
#include <vector>

int main()
{

std::vector <int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

for(int i = 0; i < v.size(); ++i)
{
  if(v[i] % 2 == 0)
  {
    v[i]*=2;
  }
  else if( v[i] % 2 != 0)
  {
    v[i]= 0;
  }
}

for(int j = 0; j < v.size(); ++j)
{
  std::cout << v[j] << " ";
}


return 0;
}
