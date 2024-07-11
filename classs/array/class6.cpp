#include <iostream>
using namespace std;

int main()
{

int size =5  , element =0 , index=0;
int arr[size]={10,20,30,40,50};


cout<<"Array before editing : ";
       for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;

        cout << "Enter the element that you want to edit :";
        cin >> element;

        cout<<"index : ";
        cin >> index;
        if(index > size)
        {
            cout<<"Invalid index"<<endl;
        }else{
            for(int i=size;i>index;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[index]=element;
            size++;
            cout<<endl;
            cout<<"Array after editing : ";
            for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
       }
        }




    return 0;
}