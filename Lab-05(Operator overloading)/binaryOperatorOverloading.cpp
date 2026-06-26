//WAP to overload binary operator to compare objs to work on user defined data type named dist that represents feet and inch.
//add when obj1<obj2
//subract when obj1>obj2
#include<iostream>
using namespace std;
class dist
{
    float feet;
    float inch;
    public:
    dist()   //Default constructor
    {
        feet=0;
        inch=0;
    }
    dist(float ft, float in)   //Parametrized operator
    {
        this->feet=ft;
        this->inch=in;
    }
    // dist(float ft, float in):feet(ft), inch(in){}  //Initialization list
    void display()
    {
        cout<<feet<<"\' "<<inch<<"\""<<endl;
    }
    ~dist(){}  //Destructor
    dist operator+(dist&);   //Sum operator declaration
    dist operator-(dist&);   //Difference operator declaration
    bool operator>(dist &);  //Ternary operator declaration for comparison between two objects
    // friend dist operator*(dist&, dist&);
};
dist dist::operator+(dist& d) //Sum operator definition
{
    float f, i;
    f=this->feet+d.feet;
    i=this->inch+d.inch;
    return dist(f,i);
}
dist dist::operator-(dist& d)  //Difference operator definition
{
    float f, i;
    f=this->feet-d.feet;
    i=this->inch-d.inch;
    return dist(f,i);
}
bool dist::operator>(dist &d) //Ternary operator definition
{
    float obj1, obj2;
    obj1=this->feet*12+this->inch;
    obj2=d.feet*12+d.inch;
    return (obj1>obj2)?true:false; //ternary opearator
}
// dist operator*(dist& d1, dist& d2)
// {
//     float in=0;
//     float ft=0;
//     ft=d1.feet*d2.feet;
//     in=d1.inch*d2.inch;
//     return dist(ft, in);
// }
int main()
{
    dist d2(1,2),d1(2,6),d3,d4;
    if(d1>d2)
    {
        d3=d1-d2;
        d3.display();
    }
    else
    {
        d3=d1+d2;
        d3.display();
    }
    // d4=d1*d2;
    // d4.display();
    return 0;
}