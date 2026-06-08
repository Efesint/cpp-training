#include <iostream>

bool are_equal(int arr1[], int arr2[], int size)
{
   for(int i = 0; i < size; ++i)
   {
      if(arr1[i] != arr2[i])
          {
             return false;
	 }
   }
return true;
}




int main()
{
int arr1[3] = {1, 2, 3};
int arr2[3] = {1, 2, 3};

if(are_equal(arr1, arr2, 3))
{
 std::cout << "true";
} else {
  std::cout << "false";
}

return 0;
}
