#include <iostream>
#include <vector>

void reverse_vector(std::vector<int>& v)
{
   for(int i = v.size() - 1; i >= 0; --i)
   {
     std::cout << v[i] << " ";
   }
}




int main()
{
std::vector<int> v = {1, 2, 3, 4, 5};
reverse_vector(v);
		


return 0;
}

