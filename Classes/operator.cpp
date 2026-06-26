/*
Operator: 
1. Urinary(Only one operand)->post fix and prefix -> Increment and decrement
2. Binary(Two operands): +-> iostream, std 
3. Ternary(Three operands)
Modifying these operators to work on user defined data type-> object=operator overloading->compile time compilation
Create class to represent object:
1. Member function to overload operator(=,[],()) Cross
2. Friend function to overload operator: <<  >>


a. O3=O1+O2 OR O1.operator+(O2) -> operator+ as function name
b. O3.add(O1)
*/
//Create a class name Time that represent time in second, minute and hour. Use postfix urinary operator to overload the postfix urinary operator to incement the object.
#include<iostream>
using namespace std;
class Time
{
    int sec;
    int min;
    int hour;
    public:
    Time()
    {
        sec=min=hour=0;
    }
    Time(int s, int m, int h): sec(s), min(m), hour(h){}
    void show()
    {
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
    //Operator overloading
    void operator++(int)   //int for postfix and empty for prefix operator
    {

        this->sec++;
        if(sec>=60)
        {
            this->min=min++;
            this->min++;
            this->sec=sec-60;
        }
        this->min++;
        if(min>=60)
        {
            this->hour=hour++;
            this->hour++;
            this->min=min-60;
        }
        this->hour++;
    }
    Time operator++();
};
inline Time Time ::operator++()
{
    ++sec;
    ++min;
    ++hour;
    // return(sec, min, hour);
    return *this;   //returning this object, nameless onject return Time(sec, min, hour), temporary object
    // return Time(++sec, ++min, ++hour);
}
int main()
{
    Time t(59,59,4),t2(0,0,0),t3;
    cout<<"Before:"<<endl;
    t.show();
    t++;
    cout<<"After:"<<endl;
    t.show();
    cout<<"Before:"<<endl;
    t2.show();
    ++t2;
    cout<<"After:"<<endl;
    t2.show();
    cout<<"Before:"<<endl;
    t3=++t2;
    cout<<"After:"<<endl;
    t3.show();
    return 0;
}

// Assignment: Overload the urinary both postfix and prefix decrement operator using friend function.

//Robert lab 