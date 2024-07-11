#include <iostream>
using namespace std;

int main()
{
    int size=3;
  int age[size];

     cout<<"Enter :"<<endl;
  for (int i=0; i<size; i++) {

    cout<<"Enter age[ "<<i+1<<" ] : "<<endl;
     cin>>age[i];
     for(int i=0; i<size; i++)
     {
            cout<<age[i]<<endl;
     }
            
  }
    return 0;
}