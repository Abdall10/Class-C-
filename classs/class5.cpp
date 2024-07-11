// write an oop complete program to repreesent 3 workers ,
// the class constructor will set the value of salary and name for each worker
//then calclate the average of salaries for all workers using friend function 
// x=2, y=4, z=6 the average is 2+4+6=12   ....   12/3 =4 


#include <iostream>
using namespace std;

    class Workers 
    {
        private:
        int salary=0;
        string name="Unkonown";
        public:
        Workers ()
        {
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your Salary : "<<endl;
            cin>>salary;
        }
        friend void average(Workers ob1, Workers ob2, Workers ob3,
         Workers ob4, Workers ob5, Workers ob6, Workers ob7, Workers ob8, Workers ob9, Workers ob10);
         
    };
    void average (Workers ob1, Workers ob2, Workers ob3,Workers ob4,
     Workers ob5, Workers ob6, Workers ob7, Workers ob8, Workers ob9, Workers ob10)
    {
        int avg = 0;
        avg= (ob1.salary+ob2.salary+ob3.salary+ob4.salary+ob5.salary+ob6.salary+ob7.salary+ob8.salary+ob9.salary+ob10.salary)/10; 
         cout<<"the average of salaries is : "<<average<<endl;      
    }


int main() 
{      
      Workers ob1, ob2, ob3, ob4,ob5,ob6,ob7,ob8,ob9,ob10 ;
     average(ob1, ob2, ob3, ob4,ob5,ob6,ob7,ob8,ob9,ob10);
            
    return 0;
}