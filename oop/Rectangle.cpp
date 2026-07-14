#include <iostream>

  class Rectangle
   {
       public:
       
       Rectangle(double w, double h)
       {
            width = w;
	    height = h;
       }

       double area()
       {
         double square = width*height;
	     return square;
       }

       double perm()
       {
         double perimetr = 2*(width+height);
	     return perimetr;
       }

       void scale(double factor)
        {
          width*=factor;
	      height*=factor;
	}

	void print_info()
	{
         std::cout << "width = " << width << std::endl;
	     std::cout << "height = " << height << std::endl;
	     std::cout << "Площадь равна " << area() << " ";
	     std::cout << std::endl;
	     std::cout << "Периметр равен " << perm() << " ";
         std::cout << std::endl;	 
            
	}

       private:
       double width;
       double height;
   };

int main()
{
Rectangle x(3.0, 4.0);

x.print_info();

x.scale(2);
std::cout << std::endl;

x.print_info();
return 0;
}
