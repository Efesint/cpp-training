#include <iostream>
// добавление 5 к первому индексу

int main()
{
int arr[4] = {10, 20, 30, 40};
arr[1]+=5;
     for(int i = 0; i < 4; ++i)
       {

         std::cout << arr[i] << " ";

       }

return 0;
}
