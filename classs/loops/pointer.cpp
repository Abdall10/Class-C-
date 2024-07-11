#include <iostream>
using namespace std;

int main()
{
       int *p;
       int x = 37;
       cout << " x = "<<x << endl;
       p = &x;
       cout << " *p = " << *p << " x = " << x << endl;
       *p =58;
       
       cout<<"*p = "<< *p << " x = " << x << endl;
       cout<<"Address of p = "<< &p  << endl;
       cout<<"value of p = "<<p<<endl;
       cout<<"value of the memory location pointed to by *p = "<< *p << endl;
       cout <<"value of x = "<<&x<<endl;
       cout<<"value of x = "<<x<<endl;

    return 0;

}
