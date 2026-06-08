#include <iostream>

int sum_positive(int arr[], int size)
{
int sum = 0;
  for(int i = 0; i < size; ++i)
  {
    if(arr[i] > 0)
    {
     sum+=arr[i];
    }
  }
 return sum;
}



int main()
{
int arr[6] = {-2, 5, 0, -8, 10, 3};
std::cout << sum_positive(arr, 6);


return 0;
}
