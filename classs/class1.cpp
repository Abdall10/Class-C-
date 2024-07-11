#include <iostream>
using namespace std;

// Class definition over int
class Book                              //It is preferable for the class name to begin with a capital letter
{
    public:
    string title;                   //Data member of type string
    string author;                  //Data member of type string
    int price;
    int pages;                      //Data member of type int


};  //Each class must be closed b ;



 int main()
 {

cout<<endl<<"book c++ :"<<endl<<endl;

    Book book1;                       //Object instance of class Book named 'book1'
    book1.title="C++ level 1 ";     //Accessing data members through dot operator
    book1.author="Abdallh";
    book1.price=10;
    book1.pages=100;

    cout<<"Book 1 "<<endl;
     cout<<"Book title : "<<book1.title<<endl;
     cout<<"Book author : "<<book1.author<<endl;
     cout<<"Book price : "<<book1.price<<" $"<<endl;
     cout<<"Book pages : "<<book1.pages<<endl;

    Book book2;                       
    book1.title="C++ level 2 ";     
    book1.author="Ahmed";
    book1.price=15;
    book1.pages=120;

     cout<<endl<<"Book 2 "<<endl;
     cout<<"Book title : "<<book1.title<<endl;
     cout<<"Book author : "<<book1.author<<endl;
     cout<<"Book price : "<<book1.price<<" $"<<endl;
     cout<<"Book pages : "<<book1.pages<<endl; 

    Book book3;                       
    book1.title="C++ level 3 ";     
    book1.author="Ali";
    book1.price=18;
    book1.pages=130;

     cout<<endl<<"Book 3 "<<endl;
     cout<<"Book title : "<<book1.title<<endl;
     cout<<"Book author : "<<book1.author<<endl;
     cout<<"Book price : "<<book1.price<<" $"<<endl;
     cout<<"Book pages : "<<book1.pages<<endl; 

    Book book4;                       
    book1.title="C++ level 4 ";     
    book1.author="Mohamed";
    book1.price=30;
    book1.pages=150;

     cout<<endl<<"Book 4 "<<endl;
     cout<<"Book title : "<<book1.title<<endl;
     cout<<"Book author : "<<book1.author<<endl;
     cout<<"Book price : "<<book1.price<<" $"<<endl;
     cout<<"Book pages : "<<book1.pages<<endl; 

    return 0;
 }