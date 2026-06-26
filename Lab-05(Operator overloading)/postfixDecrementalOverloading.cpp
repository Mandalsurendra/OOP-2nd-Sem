//WAP to overload postfix decremental operator to work on user defined data type named dist that represents feet and inch
#include<iostream>
using namespace std;
class dist
{
    int feet;
    int inch;
    public:
    dist()   //Default constructor
    {
        this->feet=0;
        this->inch=0;
    }
    dist(int ft, int in)   //Parametrized operator
    {
        this->feet=ft;
        this->inch=in;
    }
    // dist(int ft, int in):feet(ft), inch(in){}  //Initialization list
    dist operator--(int); //Postfix decrement operator declaration
    void display()
    {
        cout<<feet<<"\' "<<inch<<"\""<<endl;
    }
};
dist dist::operator--(int) //Postfix decrement operator definition
{
    this->feet--;
    this->inch--;
    return *this;
}
int main()
{
    dist d(11,10),d1;
    cout<<"Before: "<<endl;
    d.display();
    d1=d--;
    cout<<"After postfix decrement: "<<endl;
    d1.display();
    return 0;
}