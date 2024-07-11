//member function

#include <iostream>
using namespace std;

class Book
{
  public:
     string title;
     int price;
     int pages;
     string author;
     void print()
     {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<" $"<<endl;
        cout<<"Pages : "<<pages<<endl;
        cout<<"Author : "<<author<<endl;
     }

};

int main()
{
    cout<<endl<<"\t Book's c++ "<<endl<<endl<<endl;

    Book ob1;
    ob1.title = "C++ Library ";
    ob1.price =120;
    ob1.pages= 200;
    ob1.author = "( Ahmed )\n";

    Book ob2;
    ob1.title = "C++ Library ";
    ob1.price =130;
    ob1.pages= 210;
    ob1.author = "( Ali )\n";

    Book ob3;
    ob1.title = "C++ Library ";
    ob1.price =150;
    ob1.pages= 250;
    ob1.author = "( pin )\n";

    ob1.print();

    ob1.print();

    ob1.print();



    return 0;
}