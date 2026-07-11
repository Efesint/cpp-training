// хз тут всё просто
#include <iostream>

void increment(int& value)
{
 value = value + 1;

}


int main()
{
int a = 5;
increment(a);
std::cout << a;



return 0;
}
