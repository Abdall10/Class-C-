#include <iostream>
using namespace std;

int main()
{
    cout<<"Iam Dragon\n";
    cout<<"Iam Dragon\0";
    cout<<"n";

    char name_a[] = "Dragon";
    char name_b[] = "Abdallh";
    cout << name_a << "\n";
    cout << sizeof(name_a)<<"\n";
    cout << name_a[0] << "\n";
    cout << name_a[5] << "\n";

    cout << name_b << "\n";
       cout << sizeof(name_b)<<"\n";
    cout << name_b[0] << "\n";
    cout << name_b[5] << "\n";

    return 0;
}
