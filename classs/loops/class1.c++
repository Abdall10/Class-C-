#include <iostream>
using namespace std;



int main()
{

   

    int nums [] ={100,200,300,400,500,600};
      
      
    int numsCount = sizeof(nums) / sizeof(nums[0]);

    for(int i = 2 ; i < 5 ; i++)
    {
        cout << nums[i] << endl;
    }
      


    return 0;
}