//Assignment-06
//Consider two classes one representing Fname and another representing Lname. Now, use a bridge function that dynamically concatenate chars of two classes.
#include<iostream>
#include<cstring>
using namespace std;
class Fname;
class Lname;
class Fname
{
    char *F_name;
    public:
    Fname() //Default constructor
    {
        F_name=nullptr;
    }
    Fname(const char *F) //Dynamic constructor
    {
        int length=strlen(F);
        F_name=new char[length+1];
        strcpy(F_name,F);
    }
    ~Fname() //Destructor
    {
        delete[] F_name;
    }
    friend char* concatenate(const Fname &, const Lname &);  //Bridge function to concatenate two strings of two classes
};
class Lname
{
    char *L_name;
    public:
    Lname()  //Default constructor
    {
        L_name=nullptr;
    }
    Lname(const char *L)  //Dynamic constructor
    {
        int length=strlen(L);
        L_name=new char[length+1];
        strcpy(L_name,L);
    }
    ~Lname()  //Destructor
    {
        delete[] L_name;
    }
    friend char* concatenate(const Fname &,const Lname &);  //Bridge function to concatenate two strings of two classes
};
char* concatenate(const Fname &F, const Lname &L)  //Bridge function definition
{
    int length=strlen(F.F_name)+strlen(L.L_name)+2;
    char *temp=new char[length];
    strcpy(temp, F.F_name);  //Initializing temp pointer
    strcat(temp, " ");
    strcat(temp, L.L_name);
    return temp;
}
int main()
{
    char *s;
    Fname f1("Surendra"), f2("Lalbabu"), f3("Good");
    Lname l1("Mandal"), l2("Amatya"), l3("Antagonist");
    s=concatenate(f1,l1);   //Calling friend function concatenate() to concatenate strings F_name and L_name of objects f1 and l1 of classes Fname and Lname respectively.
    cout<<"The first person is: "<<s<<endl;
    delete[] s;
    s=concatenate(f2,l2);   //Calling friend function concatenate() to concatenate strings F_name and L_name of objects f2 and l2 of classes Fname and Lname respectively.
    cout<<"The second person is: "<<s<<endl;
    delete[] s;
    s=concatenate(f3,l3);   //Calling friend function concatenate() to concatenate strings F_name and L_name of objects f3 and l3 of classes Fname and Lname respectively.
    cout<<"The last person is: "<<s<<endl;
    delete[] s;
    return 0;
}