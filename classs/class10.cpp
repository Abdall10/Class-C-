#include <iostream>
using namespace std;

class Rect
{
    public:
        int width;
        int height;
     int print();
};
  int Rect::print()
  {
    return width*height;
  }

  class Pect
{
    public:
        int width;
        int height;
     int print();
};
  int Pect::print()
  {
    return width*height;
  }



int main()
{
    Rect ob;
    ob.width=10;
    ob.height=50;
    cout<<"The is Rect"<<ob.print()<<endl;

    Pect ob1;
    ob1.width=20;
    ob1.height=10;
    cout<<"The is Pect"<<ob1.print()<<endl;



    return 0;

}













