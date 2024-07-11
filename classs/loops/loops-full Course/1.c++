 /*Make a array of the total salary of the year with the
  user writing the salary of each month and find the total salary 
  of the year and its average and calculate the salary of two years */
#include <iostream>
using namespace std;

int main()
{
   // total , average, inTwoYears
   cout<<"Enter your salary : \n";
   float monthArray [12] ;      // Array for 12 months
   float total=0;
   for(int i=0; i<12 ; i++)        
   {
    cout << "Enter amount for month " << i+1 <<" : "; // i+1 To start the order from 1 instead of 0
    cin>>monthArray[i];
    total += monthArray[i];
   }
   float average = total / 12;     
   float inTwoYears = average * 24 ;    // 24 month >> in Two Years 

   cout<<" Total is : "<<total<<" $ \n";
   cout <<" The Average is : "<<average<<" $ \n";
   cout <<" The inTwoYears is : "<<inTwoYears<<" $ \n";
 
   return 0;
}



