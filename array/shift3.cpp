#include <iostream>
//сдвиг последнего числа в первый индекс
int main()
{
int arr[6] = {1, 2, 3, 4, 5, 6};
int last = arr[5];
       
       for(int i = 5; i > 0; --i)
        {
          arr[i] = arr[i -1];
	}

          arr[0] = last;


	    for(int j = 0; j < 6; ++j)
	     {
	      
	       std::cout << arr[j] << " ";

	     }



return 0;
}
