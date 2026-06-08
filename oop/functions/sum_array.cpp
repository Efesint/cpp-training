#include <iostream>

int sum_array(int arr[], int size)
{
int sum = 0;
 for(int i = 0; i < size; ++i)
 {
   sum+=arr[i];
 }
 return sum;
}


int main()
{
int arr[5] = {5, 10, 15, 20, 25};
std::cout << sum_array(arr, 5);



return 0;
}
