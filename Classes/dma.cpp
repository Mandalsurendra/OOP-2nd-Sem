#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollNo;
    public:
    student()   //Default constructor
    {
        cout<<"Default constructor called"<<endl;
        this->name="null";
        this->rollNo=0;
    }
    student(string name, int rollNo)  //Parametrized constructor
    {
        cout<<"Constrctor called"<<endl;
        this->name=name;
        this->rollNo=rollNo;
    }

    student(student &);   //Copy constructor

    void setData()
    {
        cout<<"Enter name and roll no,:"<<endl;
        cin>>name>>rollNo;
    }
    void showData();
    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
};
void student:: showData()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No.:"<<rollNo<<endl;
}
student::student(student&x)
{
    cout<<"Copy constrctor called"<<endl;
    this->name=x.name;
    this->rollNo=x.rollNo;
}
// int main()     //Out of syllabus
// {
//     // int n;
//     // cout<<"Enter the no. of students:"<<endl;
//     // cin>>n;
//     // int *x=new int[n];
//     // cout<<*x;
//     student *s;
//     // (*s).showData("Surendra Mandal",89);
//     cout<<"Size of class students obect:"<<sizeof(student)<<endl;
//     // s->showData("Surendra Mandal",89);
//     s=new student("Surendra Mandal",89);
//     s->showData();
//     s=new student("Lalbabu Mandal",1);
//     s->showData();
//     delete s;
//     return 0;
// }

// int main()
// {
//     //unique pointer
//     unique_ptr<student> s=make_unique<student>("Surendra Mandal",89);
//     s->showData();
//     return 0;
// }

int main()
{
    student *s=new student[2];   //Run time arrayof object creation, memory allocated and memory of first byte is send
    //student * [20]; compile time array of object creation
    for(int i=0; i<2;i++)
    {
        s[i].setData();   //(s+i)->setData();   <---- Prefer this one
    }
    for(int i=0; i<2;i++)
    {
        s[i].showData();   //(s+i)->showData();
    }
    student s1(s[0]);   //s1=s[0]
    s1.showData();
    return 0;
}