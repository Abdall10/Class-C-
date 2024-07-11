#include <iostream>
using namespace std;

class YT
{
    public:
        string name;
        

        void print(YT ob)
        {
            cout<<"The Name is : "<<ob.name <<endl;                 
        }
        void set(YT ob1)
        {
            cout<<"The Name is : "<<ob1.name <<endl;                 
        }

};

int main()
{
    YT ob1;
    YT ob2;
    ob1.name="lauring";
    ob2.name="C++";
    
    ob2.print(ob1);
    ob1.set(ob2);
   

    


    return 0;

}













