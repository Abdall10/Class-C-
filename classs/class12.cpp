#include <iostream>
using namespace std;

class company
{

    public:
        int id;
        string name;
        double salary;
        void save(int i, string n, double sal)
        {
            id=i;   // id =1
            name=n;    //name = 
            salary =sal; //salary =
        }
        void display()
        {
            cout<<id<<" "<<name<<" "<<salary<<" $ "<<endl;
        }

};

int main ()
{

        company ob1;
        company ob2;
        ob1.save( 1 , "Abdallh" , 8000 );
        ob2.save( 2 , "Ahmed" , 5000 );
        ob1.display();
        ob2.display();


    return 0;
}