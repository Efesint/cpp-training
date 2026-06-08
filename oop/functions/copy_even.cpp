#include <iostream>

int copy_even(int src[], int size, int dst[])
{
int j = 0;
  for(int i = 0; i < size; ++i)
  {
    if(src[i] % 2 == 0)
      {
        dst[j] = src[i];
        ++j;
      }
  }
  return j;
}




int main()
{
int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int dst[8];
int count = copy_even(src, 8, dst);
      for(int i = 0; i < count; ++i)
      {
         std::cout << dst[i] << " ";
      }


return 0;
}
