#include <iostream>
using namespace std;

int main ()
{
    int x[5];
    int size = 4;
    for(int i =0; i <=size; i++){
        cout<<"Enter the value of the Number "<<i+1<<" : \n";
        cin>>x[i];
    }
    int maxx=x[0];
    int minn=x[0];
    

    for(int i =0; i <=size; i++){
        if (maxx<x[i])
        {
            maxx=x[i];
        }if (minn>x[i]){
            minn=x[i];
        }
    }
    cout <<"max is : "<<maxx<<endl;
    cout <<"min is : "<<minn<<endl;

    return 0;

}