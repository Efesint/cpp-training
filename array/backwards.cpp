#include <iostream>
// переворачиваем массив задом наперёд;
int main()
{
int arr[7] = {10, 20, 30, 40, 50, 60, 70};
      for(int i = 0, j = 6; i < j; ++i, --j)
        {

            int temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;

	}

	for(int k = 0; k < 7; ++k)
	 {

          std::cout << arr[k] << " ";
	 
	 }



return 0;
}
