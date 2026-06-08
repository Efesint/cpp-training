#include <iostream>

int max_array(int arr[], int size)
{
int max = 0; // работает, но только пока в массиве нет отрицательных чисел.
  // лучше использовать int max = arr[0];
  for(int i = 0; i < size; ++i)
  {
    if(max < arr[i])
    {
      max=arr[i];
    }

  }
  return max;
}




int main()
{

int arr[6] = {3, 17, 8, 42, 5, 31};
std::cout << max_array(arr, 6);

return 0;
}
