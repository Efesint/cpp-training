#include <iostream>

void replace_negative_with_zero(int arr[], int size)
{
   for(int i = 0; i < size; ++i)
   {
     if(arr[i] < 0)
     {
       arr[i]=0;
     }
   }

}



int main()
{
int arr[6] = { -2, 5, 0, -8, 10, -3};
replace_negative_with_zero(arr, 6);
for(int i = 0; i < 6; ++i)
{
  std::cout << arr[i] << " ";
}


return 0;
}
