#include <iostream>

void print_positive(int arr[], int size)
{
  for(int i = 0; i < size; ++i)
  {
    if(arr[i] > 0)
    { 
      std::cout << arr[i] << " ";
    }
  }
}



int main()
{
int arr[7] = {-3, 5, 0, -1, 8, -2, 4};
print_positive(arr, 7);

return 0;
}
