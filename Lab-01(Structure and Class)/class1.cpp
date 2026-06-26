/* 
Create class named student with data member both as public and private
and try to access from outside the class
and state under what condition they are accessible or not. 
*/
#include<iostream>
using namespace std;
class student
{
    public:     //Making public data specifier
    string name;
    int rollNo;
    int age;
    private:    //Making private data specifier
    float percentage; //Percentage cannot be accessed from everywhere. It can be accessed through member function inside class only.
};
int main()
{
    student s;
    cout<<"Enter Student's Name:"<<endl;   //Taking student's details
    cin>>s.name;
    cout<<"Enter roll no.:"<<endl;
    cin>>s.rollNo;
    cout<<"Enter age:"<<endl;
    cin>>s.age;
    // cout<<"Enter percentage:"<<endl;  //This cannot be modified or accessed as data member is private
    // cin>>s.percentage;

    cout<<"-------------------------------------"<<endl;  //Dissplaying student's details
    cout<<"Student's name:"<<s.name<<endl;
    cout<<"Roll No.:"<<s.rollNo<<endl;
    cout<<"Age:"<<s.age<<endl;
    //cout<<"Percentage:"<<s.percentage<<endl;  //This cannot be accessed as it's private
    cout<<"-------------------------------------"<<endl;
    return 0;
}