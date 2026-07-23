#include <iostream>
  class Mediaplayer
   {
      public:
      Mediaplayer() {}
       
       virtual void play() 
        {
          std::cout << "Playing mediaplayer" << std::endl;
	}

       private:
   };

  class Musicplayer : public Mediaplayer
   {
      public:
      Musicplayer() {}

       void play() override
        {
          std::cout << "Playing music" << std::endl;
	}

      private:
   };

  class Videoplayer : public Mediaplayer
   {
       public:
       Videoplayer() {}
        
	void play() override
	 {
           std::cout << "Playing video" << std::endl;
	 }

       private:

   };

  class Podcastplayer : public Mediaplayer
   { 
      public:
      Podcastplayer() {}

      void play() override
       {
         std::cout << "Playing podcast" << std::endl;
       }

      private:
   };


int main()
{
Mediaplayer* arr[3];

arr[0] = new Musicplayer();
arr[1] = new Videoplayer();
arr[2] = new Podcastplayer();

  for(int i = 0; i < 3; ++i)
   {
     arr[i]->play();
   }

return 0;
}
