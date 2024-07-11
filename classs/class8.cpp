#include <iostream>
using namespace std;


class Book
{

    private:
         
        public:
        string name;  
        int age;
        

        void print()                      //memder function
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Age is : "<<age<<endl;
        }
             

};

int main()
{

    Book o;
    Book o2;

    o.name="C++";
    o.age=10;

    o2.name="C++ 1 ";
    o2.age=20;

    o.print();
    o2.print();
   
        


    return 0;
}