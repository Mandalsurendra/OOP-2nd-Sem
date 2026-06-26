//WAP to create a class name cartesian and another class name polar.
//Convert crtesian into polar form using class to class conversion.
#include<iostream>
#include<math.h>
using namespace std;
class cartesian;
class polar;
class cartesian
{
    int x,y;
    public:
    cartesian() //Default constructor
    {
        x=y=0;
    }
    cartesian(int a, int b):x(a),y(b){} //Initialization list_parametrized constructor
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void display()
    {
        cout<<"Cartesian: ("<<x<<","<<y<<")"<<endl;
    }
    friend class polar;
    ~cartesian(){}   //Destructor
};
class polar
{
    float r,theta;
    public:
    polar()  //Default costructor
    {
        r=theta=0;
    }
    polar(float ra, float t):r(ra), theta(t){} //parametrized constructor
    polar(cartesian &c)  //Class to class conversion
    {
        float a,b;
        a=(float)(pow(pow(c.getX(),2)+pow(c.getY(),2),0.5));
        b=(float)(atan(c.getY()/c.getX()));
    }
    void display()
    {
        cout<<"Polar: ("<<r<<","<<theta<<")"<<endl;
    }
    ~polar(){} //Destructor
};
int main()
{
    cartesian c(3,4);
    polar p(c);
    c.display();
    p.display();
    return 0;
}