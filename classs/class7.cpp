#include <iostream>
using namespace std;

class Book
{
   


    public:
        string title;  
        string author;
        int price;
        int pages;        

};


int main()
{

        Book book1;

        book1.title = " C++ level 1 ";
        book1.author = "John Doe";
        book1.price = 250;
        book1.pages = 120;
        cout << "The Title is : "<<book1.title<<endl
             <<"The Author is : "<<book1.author<<endl
             <<"The price is : "<<book1.price<<" $"<<endl
             <<"pages is : "<<book1.pages<<endl<<endl;

              Book book2;

        book2.title = " C++ level 2 ";
        book2.author = "John Doe";
        book2.price = 280;
        book2.pages = 120;
        cout << "The Title is : "<<book2.title<<endl
             <<"The Author is : "<<book2.author<<endl
             <<"The price is : "<<book2.price<<" $"<<endl
             <<"pages is : "<<book2.pages<<endl<<endl;

               Book book3;

        book3.title = " C++ level 3 ";
        book3.author = "John Doe";
        book3.price = 250;
        book3.pages =  130;
        cout << "The Title is : "<<book3.title<<endl
             <<"The Author is : "<<book3.author<<endl
             <<"The price is : "<<book3.price<<" $"<<endl
             <<"pages is : "<<book3.pages<<endl<<endl;
    return 0;
}