#include <iostream>
#include <string>

class Shape
 {
    public:
     Shape(std::string n)
      {
         name = n;
      }

     virtual double area()
      {
          return 0;
      }

     void print()
      {
          std::cout << "Фигура: " << name;
	  std::cout << std::endl;
	  std::cout << "Площадь: " << area();
	  std::cout << std::endl;
      }

    private:
    std::string name;
 };

  class Rectangle : public Shape
   { 
      public:
         Rectangle(double w, double h, std::string n) : Shape(n)
	  {
            width = w;
	    height = h;
	  }

	 double area() override
	  {
             return width*height;
	  }

      private:
      double width;
      double height;
   };

  class Circle : public Shape
   {
      public:
       
       Circle(double r, std::string n) : Shape(n)
        {
           radius = r;
	}
        
       double area() override
        {
          return 3.14*radius*radius;
	}
      private:
      double radius;

   };



int main()
{
Shape s("shape");
Rectangle r(5, 5, "kto");
Circle c(5, "krug");

Shape* shapes[3];
shapes[0] = &r;
shapes[1] = &c;
shapes[2] = &s;
  for(int i = 0; i <= 2; ++i)
   {
     shapes[i]->print();
     
   }

return 0;
}
