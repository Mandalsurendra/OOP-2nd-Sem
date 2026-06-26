// Create a structure name student, and check if they can be accessed from outside the structure.
#include<iostream>
using namespace std;
struct student     // defining structure named student.
{
    string name;
    int rollNo;
    int age;
    float percentage;
};
int main()
{
    student s;   // Creating structure variable to store data
    s.name="Surendra Kumar Mandal";
    s.rollNo=12345;
    s.age=19;
    s.percentage=80.0;
    cout<<"Student Name:"<<s.name<<endl;  //Accessing structure from outside.
    cout<<"Roll Number:"<<s.rollNo<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Percentage:"<<s.percentage<<endl;
    return 0;
}