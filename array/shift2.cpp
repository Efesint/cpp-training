#include <iostream>
//сдвиг первого числа на последнее
int main()
{
int arr[6] = {1, 2, 3, 4, 5, 6};
int first = arr[0];

   for(int i = 0; i< 5; ++i)
    {

      arr[i] = arr[i + 1];

    }

arr[5] = first;
  
      for(int i = 0; i < 6; ++i)
        {

          std::cout << arr[i];

	}



return 0;
}
