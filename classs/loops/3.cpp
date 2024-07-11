 //calculate the factorial of anumber
 #include <iostream>
using namespace std;

int fun(int n)
{
 if(n==1)
 {
    return 1;
 }
 
 else
 {
 return n*fun(n-1);
 }

}

int main()
{
cout<<fun(4);
   
  return 0;
}

//Fact(1)=1
//Fact(2)=2*1 or 2*Fact(1)
//Fact(3)= 3*2*1 or = 3 *Fact(2)
//Fact(4)=4*Fact(3)  

//Fact(n)=n*Fact(n-1)

