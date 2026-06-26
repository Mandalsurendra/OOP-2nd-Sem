//Overload the function name area that calculates area of circle, rectangle and triangle.
#include<iostream>
#include<math.h>
#define PI 3.1415
using namespace std;
void area(float r)
{
    cout<<"Area of circle: "<<PI*pow(r,2)<<endl;
}
void area(float l,float b)
{
    cout<<"Area of rectangle: "<<l*b<<endl;
}
void area(float a, float b, float c)
{
    float s;
    s=(a+b+c)/2;
    cout<<"Area of triangle: "<<pow(s*(s-a)*(s-b)*(s-c),0.5)<<endl;
}
int main()
{
    area(7);
    area(10,5);
    area(3,4,5);
    return 0;
}