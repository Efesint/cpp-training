#include <iostream>

  void func(int*& p)
   { 
      for(int i = 0; i < 5; ++i)
       {
         p[i]=p[i]+1;
       }
   }
int main()
{

int *p = new int[5]{1, 2, 3, 4, 5};

  for(int i = 0; i < 5; ++i)
   {
     std::cout << p[i] << " ";
   }

func(p);

std::cout << std::endl;

  for(int j = 0; j < 5; ++j)
   {
     std::cout << p[j] << " ";
   }

return 0;
}
