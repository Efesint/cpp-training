#include <iostream>
//сумма всех чисел в массиве
int main(){

int sum = 0;
int arr[9] = {12, 14, 16, 17, 18, 19, 20, 23, 25};

    for(int i = 0; i < 9; ++i)
      {

         sum+=arr[i];

      }

std::cout << sum;      

return 0;
}
