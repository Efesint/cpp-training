#include <iostream>
#include <vector>

int main()
{
std::vector<int> x;
for(int i = 1; i <= 10; ++i)
{
   x.push_back(i);
}

for(int i = 0; i < x.size(); ++i)
{
   std::cout << x[i] << " ";
}


return 0;
}
