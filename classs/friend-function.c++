#include <iostream>
using namespace std;

class Stu
{
    private:
          int mark;
          public:
          Stu(int m)  //op1
          {
            mark=m;  //mark=100
          } 
          void print();
          friend void show(Stu ob1); // show is friend the Class   
};


         void Stu :: print()
         {
            cout<<"mark is : "<<mark<<endl;
         }
        void show(Stu ob1)  // friend function
        {
           cout<<"mark is : "<<ob1.mark<<endl;   // ob1.mark is a friend function
        }
        
int main()
{

    Stu ob1(100);
    ob1.print();
    show(ob1);

    return 0;
}