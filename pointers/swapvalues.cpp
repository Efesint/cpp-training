#include <iostream>

void swapvalues(int* ptrA, int* ptrB)
{
   int temp = *ptrA;
   *ptrA = *ptrB;
   *ptrB = temp;

}


int main()
{
int a=5, b=10;
// wadafaaak swapvalues(a, b);
std::cout << a << " " << b << std::endl;


return 0;
}
