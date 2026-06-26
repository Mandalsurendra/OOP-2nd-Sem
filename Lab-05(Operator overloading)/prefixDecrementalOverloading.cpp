//WAP to overload prefix decremental operator to work on user defined data type named dist that represents feet and inch.
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
    // dist(int ft, int in):feet(ft), inch(in){}  //Initilization list
    dist operator--(); //Decremental operator declaration.
    void display()
    {
        cout<<feet<<"\' "<<inch<<"\""<<endl;
    }
};
dist dist::operator--() //Dectremental operator definition
{
    this->feet=--feet;
    this->inch=--inch;
    return *this;
}
int main()
{
    dist d(11,10),d1;
    cout<<"Before: "<<endl;
    d.display();
    d1=--d;
    cout<<"After prefix decrement: "<<endl;
    d1.display();
    return 0;
}