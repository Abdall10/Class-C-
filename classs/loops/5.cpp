#include <iostream>
using namespace std;
class Company
{
    private:
     string name;
     int id;
     int salary;
     public:
        void add(string n, int i, int sal)
        {
            name=n;
            id=i;
            salary=sal;
        }
     void print()
     {
        cout<<"your name is : "<<name<<endl;
        cout<<"your id is : "<<id<<endl;
        cout<<"Your Salary is : "<<salary<<" $ "<<endl;
     }
};
int main()
{
    Company ob1;
    

      ob1.add("abdallh",123,500);
      ob1.print();
    return 0;
}