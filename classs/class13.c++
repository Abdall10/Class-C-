// Constructor    is a build

#include <iostream>
using namespace std;

class Book
{

    public:
    int page;
    string name;

           Book()
           {
            cout<<"I am a function\n";
            

           }

    void print()
    {
        cout<<"I am a function\n";
        cout<<name<<endl;
        cout<<page<<endl;
    }



};

    int main()
{
    Book ob;
    

    Book ob2;
    

    ob.print();
    
    

    return 0;
}