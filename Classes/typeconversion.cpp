//Create a class name rect that represents rectangular coordinate x,y and create another
//class name polar that represents polar coordiante r,theta. Convert the data type
//rect floato polar using desination type wothout using friend function.
#include<iostream>
#include<math.h>
using namespace std;
class rect;
class polar;
class rect
{
    float x,y;
    public:
    rect()
    {
        x=0,y=0;
    }
    rect(float x, float y)
    {
        this->x=x;
        this->y=y;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    friend class polar;
    void display()
    {
        cout<<"Cartesian: ( "<<x<<","<<y<<")"<<endl;
    }
};
class polar
{
    float r, theta;
    public:
    rect c;
    polar()
    {
        r=theta=0;
    }
    polar(rect &c)
    {
        this->r=pow(pow(c.getx(),2)+pow(c.gety(),2),0.5);
        this->theta=atan(c.gety()/c.getx());
    }
    void display()
    {
        cout<<"Polar: ( "<<r<<","<<theta<<")"<<endl;
    }
};
int main()
{
    rect r(3,4);
    r.display();
    polar p(r);
    p.display();
    return 0;
}