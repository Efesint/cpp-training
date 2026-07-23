#include <iostream>

  class File
   {
      public:
       File()
        {
           
	}

	virtual void open()
	 {
           std::cout << "Opening file" << std::endl;
	 }
        
      private:
   };

  class Textfile : public File
   {
     public:
       Textfile() {};

       void open() override
        {
           std::cout << "Opening text file" << std::endl;
	}
     private:

   };

  class Imagefile : public File
   {
       public:
         Imagefile()
	  {
  
	  }
        void open() override
	 {
           std::cout << "Opening image file" << std::endl;
	 }
       private:

   };

  class Executablefile : public File
   {
     public:
       Executablefile() {}
        void open() override
	 {
           std::cout << "Opening executable file" << std::endl;
	 }
     private:
 
   };

int main()
{

File* arr[3];

arr[0] = new Textfile();
arr[1] = new Imagefile();
arr[2] = new Executablefile();

   for(int i = 0; i < 3; ++i)
    {
        arr[i]->open();
    }

return 0;
}
