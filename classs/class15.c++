// write acomplete program to repersent the rectangle class

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int x = 0;
    int y = 0;

public:
    Rectangle()
    {
        cout << "this is Rectangle num  " << endl;
        cout << "Enter width of Rectangle : " << endl;
        cin >> x;
        cout << "Enter height of Rectangle : " << endl;
        cin >> y;
    }
    int areaRect()
    {
        int area=0;
        area=x*y;
        return area;
    }
    friend void find(Rectangle ob1, Rectangle ob2);
};
void find(Rectangle ob1, Rectangle ob2)
{
    cout << "Area of a rectangle : " << endl;
    if(ob1.areaRect() > ob2.areaRect())
    {
        cout<<"the Area of first Rectangle is the biggest area :"<<ob1.areaRect()<<endl;
    }
    else if (ob2.areaRect() > ob1.areaRect())
    {
        cout<<"the Area of secound Rectangle is the biggest area :"<<ob2.areaRect()<<endl;
    }
}

int main()
{
    Rectangle ob1;
    Rectangle ob2;
    find(ob1,ob2);

    return 0;
}