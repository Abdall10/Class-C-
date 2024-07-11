#include <iostream>
using namespace std;

int main()
{
       int *ptr1;
       int *ptr2=NULL;
       int *ptr3=nullptr;


       cout<< ptr1<<endl;
       cout<< ptr2<<endl;
       cout<< ptr3<<endl;

       int a = 100;
       void *ptr = &a;

       

       // C-Style

      // cout<< *(int *)ptr << "\n"; 

      // Modern 
      cout << *static_cast <int*>(ptr )<< "\n"; 





    return 0;

}
