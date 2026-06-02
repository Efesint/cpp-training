#include <iostream>

int main()
{
int arr[8] = {3, 7, 2, 3, 9, 7, 1, 2};
    for(int i = 0; i < 8; ++i)
     {
       for(int j = i + 1; j < 8; ++j)
        {
          if(arr[i] == arr[j])
	    {

             std::cout << arr[i];
             break;

	    }
	}
     }


return 0;
}
