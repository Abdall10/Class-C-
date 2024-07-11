//write a complete oop program to repersent the teacher class define two
//data members then define an enginner class with two data members use a
// friend function to add 1000$ on the salaries of a Teacher named Ali and engineer named Ahmed just ali and Ahmed 

#include <iostream>
using namespace std;
class Engineer;       
class Teacher
{
        private:
            int salary=0;
            string name = "Teacher";

        public:
         Teacher()
         {
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your Salary : "<<endl;
            cin>>salary;
         }
         friend void add(Teacher ob1, Engineer ob2);
};

class Engineer
{
        private:
            int salary=0;
            string name = "Teacher";

        public:
         Engineer()
         {
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your Salary : "<<endl;
            cin>>salary;
         }
         friend void add(Teacher ob1, Engineer ob2);
};
void add(Teacher ob1, Engineer ob2)
{
    if(ob1.name=="Ali")
    {
    cout<<"The new salary of Teacher is : "<<ob1.name<<endl;
    ob1.salary+=1000;
    cout<<ob1.salary<<" $ "<<endl;
}else{ cout<<"There are no salary variables !"<<endl; }
     if(ob2.name=="Ahmed")
{
    cout<<"The new salary of Engineer is : "<<ob2.name<<endl;
    ob2.salary+=1000;
    cout<<ob2.salary<<" $ "<<endl;
    }else{ cout<<"There are no salary variables !"<<endl; }
}

int main()
{
Teacher ob1;
Engineer ob2;
add(ob1, ob2);




    return 0;
}