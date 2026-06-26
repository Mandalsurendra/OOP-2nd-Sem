/*
Variables      Global      Local      Static
Visibility       G           L          L     //Visibility: Where the variables are seen
Lifespan         G           L          G     //Lifespan: Upto when the variables store the value
*/
//Create a class name box that represents its length and volume. 
//It should have constructor both default and parametrized to initialized the object.
//It should have static data members that keeps the record of no. of objects created.

#include<iostream>
#include<math.h>
using namespace std;
class box
{
    private:
    float length;
    float volume;
    static int count; //Declare static variable inside class; cannot initialize inside the class
    public:
    box()     //Default constructor
    {
        cout<<"Default constructor called."<<endl;
        length=volume=0;
        count++;
    }
    box(float x): length(x)    // Parametrized constructor
    {
        cout<<"Constructor called"<<endl;
        this->volume=pow(length,3);
        count++;
    }
    // OR
    // box(float x)
    // {
    //     this.x=length;
    // }

    void show()
    {
        cout<<"Length:"<<length<<" Volume:"<<volume<<endl;     //<<"No. of objects created:"<<count<<endl;
    }

    static void showCounter() //Static member function that belongs to class only not object.
    {
        cout<<"No. of objects created:"<<count<<endl;
    }
    ~box()
    {
        cout<<"Object destroyed."<<endl;
    }

};
int box::count=0; //Initialize the static var outside the class
int main()
{
    box b1(10), b2(20), b3;
    b1.show();
    b2.show();
    b3.show();
    box::showCounter();
    return 0;
}