// write an oop complete program to repreesent 3 workers ,
// the class constructor will set the value of salary and name for each worker
//then calclate the average of salaries for all workers using friend function 
// x=2, y=4, z=6 the average is 2+4+6=12   ....   12/3 =4 



#include <iostream>
using namespace std;

class Workers {
    private:
    int salary=0;
    string name="Unkonown";

    public:
    Workers()   // objects (10,"Unkonown")
    {
        
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter your Salary : "<<endl;
        cin>>salary;
    }
    
    friend void average(Workers ob1, Workers  ob2, Workers ob3);  // Receives 3  objects.

   
};
     void average(Workers ob1, Workers  ob2, Workers ob3)
    {
        int avg = 0;
        avg= (ob1.salary+ob2.salary+ob3.salary) / 3;    // average is : (total salary 3 workers) / 3
        //Values ​​inside parentheses are the prime additions before division

        cout<<"the average of salaries is : "<<average<<endl;
    }


int main() 
{      

         Workers ob1, ob2, ob3;
         average(ob1, ob2, ob3);

         
        
            
    return 0;
}