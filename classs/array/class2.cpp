#include <iostream>
using namespace std;

int main()
{
  int arr[]= {1,2,3,4,5 };
  int sizeofArray =0;
  sizeofArray= sizeof(arr)/sizeof(arr[1]);
   cout<<"Size of Array: "<<sizeofArray;


   string names[]=
   {"fd","tdhjc","yjkik","rgxf","dthxgj","xdyt"}; // array to store names

   int sizeofArrayN = sizeof(names)/ sizeof(names[1]);
   cout << "Number of elements in the array : "<<sizeofArrayN ;
    
    return 0;
}