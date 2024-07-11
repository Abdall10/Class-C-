/*write an oop complete program to repersent a car, the class constructor
will set the values to all its data members , then create a member function outside the class to display the car price
, then create a friend function to increase the car price by 1000
*/
#include <iostream>
using namespace std;


class Car
{
   private:
    string name;
    int price;
    public:
    Car(string n, int p)
    {
        name=2;
        price = p;
    }
    void display();
    friend void increase(Car ob);

};

void increase(Car ob)           //friend function name=BMW , price=1000
{
    cout<<"The old price of is : "<<ob.price<<" $ "<<endl;
    ob.price +=1000;
    cout<<"The new price of the car is : "<<ob.price<<" $ "<<endl;
}

void Car :: display()
{
    cout<< "price of is : "<<price<<endl;
}


int main()
{
    Car ob1("BMW",1000);
    ob1.display();
    increase(ob1);


    return 0;
}