// Digital Clock

#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;


int main() {
  //variabels 
  int hours=0;
  int minutes = 0;
  int seconds = 0;

  // end of variables

  cout<<"hours : "<<endl;
  cin >> hours;

  cout<<"minutes : "<<endl;
  cin >> minutes;

  cout<<"seconds : "<<endl;
  cin >> seconds;

  while (true)    // infinty loop
  {
    system("cls");   // clear the screen   
    if(seconds > 59 ){
          minutes++;
          seconds = 0;
    }
    if(minutes > 59 ){
          hours=0;
          minutes = 0;
    }
    if(hours >23)
    {
       hours=0;
    }
    cout<<"The Time is : \n" <<"| "<< hours <<" : "<<minutes <<": " <<seconds <<" | \t ";
    seconds++;
    Sleep(900); // #include <windows.h>   => open thes file
  }
  


  return 0;
}