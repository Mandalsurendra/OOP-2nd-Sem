// Function overloading
#include <iostream>
#define pi 3.141592
#include <math.h>
using namespace std;

void area(float l, float b) // First function with function name 'area'
{
    cout << "Area of rectangle: " << l * b << endl;
}

void area(float r) // Second function with function name 'area'
{
    cout << "Area of circle: " << pi * pow(r, 2) << endl;
}

int main()
{
    area(7); // This function call will execute the second function because it has one argument.
    area(1.4, 1.9); // This function call will execute the first function because it has two arguments.
    return 0;
}
