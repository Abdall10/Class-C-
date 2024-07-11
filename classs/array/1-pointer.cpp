#include <iostream>
using namespace std;

int main()
{
      int num =100;
      int* ptr = &num;    //&address of 

      cout<<"Value: "<<num<<endl;  
      cout<<"Address: "<<&num<<endl; 
      cout<<"Address: "<<ptr<<endl;
      cout<<"value: " <<*ptr<<endl;  

     *ptr=200;

        cout<<"Value: "<<num<<endl;  
      cout<<"Address: "<<&num<<endl; 
      cout<<"Address: "<<ptr<<endl;
      cout<<"value: " <<*ptr<<endl;

    return 0;
}