//Function overriding-
//Write a program to find the sum of three numbers using multiple inheritance and function overriding.
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Set the value of a in class A:";
        cin>>a;
    }
    void display()
    {
        cout<<"The value of a in class A: "<<a<<endl;
    }
};
class B
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Set the value of a in class B:";
        cin>>a;
    }
    void display()
    {
        cout<<"The value of a in class B: "<<a<<endl;
    }
};
class C:public A, public B
{
    int a;
    public:
    void input()
    {
        A::input();   //Ambuiguity in multiple inheritance
        B::input();
        cout<<"Set the value of a in class C:";
        cin>>a;
    }
    void display()
    {
        A::display();
        B::display();
        cout<<"The value of a in class C: "<<a<<endl;
        cout<<"Sum: "<<A::a+B::a+a<<endl;
    }
};
int main()
{
    C c;
    c.input();  //Function overriding
    c.display(); //Function overriding
    return 0;
}