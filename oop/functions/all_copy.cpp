#include <iostream>

void copy_all(int src[], int dst[], int size)
{
  for(int i = 0; i < size; ++i)
  {
    dst[i] = src[i];
  }
}

int copy_positive(int src[], int dst[], int size) {
    int j = 0;
    for(int i = 0; i < size; ++i) {
        if(src[i] > 0) {
            dst[j] = src[i];
            ++j;
        }
    }
    return j;
}


void reverse_copy(int src[], int dst[], int size)
{
   for(int i = size - 1, j = 0; i >= 0; --i, ++j)
  {
    dst[j] = src[i];
  }
}

int main()
{
int src[8] = {1, -2, 3, -4, 5, -6, 7, -8};
int dst[8] = {0};
copy_all(src,dst,8);
    for(int i = 0;i < 8; ++i)
      {
        std::cout << dst[i] << " ";
      }
std::cout << std::endl;

int count = copy_positive(src,dst,8);
    for(int i = 0;i < count; ++i)
      {
        std::cout << dst[i] << " ";
      }
std::cout << std::endl;

reverse_copy(src,dst,8);
    for(int i = 0;i < 8; ++i)
      {
        std::cout << dst[i] << " ";
      }


return 0;
}
