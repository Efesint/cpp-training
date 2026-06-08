#include <iostream>

int find_index(int arr[],int size, int target)
{
   for(int i = 0; i < size; ++i)
   {
     if(arr[i] == target)
     {
       return i;
     }
   }
   return -1;
}


int main()
{
int arr[5] = {10, 25, 30, 25, 50};
std::cout << find_index(arr, 5, 25);

return 0;
}
