#include <iostream>
using namespace std;
class Car
{
     public:
     int price;
     string type;
     int speed;

};
int main()
{

    Car ob1;
    Car ob2;
    Car ob3;
    Car ob4;
    Car ob5;
    Car ob6;

    ob1.price =250000;
    ob1.type="BMW 2024";
    ob1.speed =280;

    ob2.price =200000;
    ob2.type="BMW 2023";
    ob2.speed =280;

    ob3.price =180000;
    ob3.type="BMW 2022";
    ob3.speed =280;

    ob4.price =170000;
    ob4.type="BMW 2021";
    ob4.speed =280;

    ob5.price =160000;
    ob5.type="BMW 2020";
    ob5.speed =280;

    ob6.price =155000;
    ob6.type="BMW 2020";
    ob6.speed =280;


    

    cout<<"Model 1 name : "<<ob1.type<<endl<<"price : "<<ob1.price<<"$"<<endl<<"The Speed is : "<<ob1.speed<<" K/M"<<endl<<endl;
    cout<<"Model 2 name : "<<ob2.type<<endl<<"price : "<<ob2.price<<"$"<<endl<<"The Speed is : "<<ob2.speed<<" K/M"<<endl<<endl;
    cout<<"Model 3 name : "<<ob3.type<<endl<<"price : "<<ob3.price<<"$"<<endl<<"The Speed is : "<<ob3.speed<<" K/M"<<endl<<endl;
    cout<<"Model 4 name : "<<ob4.type<<endl<<"price : "<<ob4.price<<"$"<<endl<<"The Speed is : "<<ob4.speed<<" K/M"<<endl<<endl;
    cout<<"Model 5 name : "<<ob5.type<<endl<<"price : "<<ob5.price<<"$"<<endl<<"The Speed is : "<<ob5.speed<<" K/M"<<endl<<endl;
    cout<<"Model 6 name : "<<ob6.type<<endl<<"price : "<<ob6.price<<"$"<<endl<<"The Speed is : "<<ob6.speed<<" K/M"<<endl<<endl;
    return 0;
}