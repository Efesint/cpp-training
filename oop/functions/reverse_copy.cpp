#include <iostream>

void reverse_copy(int src[], int dst[], int size)
{
   for(int i = size - 1, j = 0; i >= 0; --i, ++j)
  {
    dst[j] = src[i];
  }
}


int main()
{
int src[5] = {1, 2, 3, 4, 5};
int dst[5];
reverse_copy(src,dst, 5);
for(int i = 0; i < 5; ++i)
{
  std::cout << dst[i] << " ";
}


return 0;
}
