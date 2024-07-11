#include <iostream>
using namespace std;

class Rect
{
    public:
        int width;
        int height;

        int print()
        {
           return width*height;   // if return value is used cout<< in int main
        }
};

int main()
{
    Rect ob1;
    ob1.width = 30;
    ob1.height = 20;

    Rect ob2;
    ob2.width = 50;
    ob2.height = 250;

   cout<< ob1.print()<<endl;
   cout<< ob2.print()<<endl;


    return 0;
}