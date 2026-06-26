#include<iostream>
using namespace std;
class animal
{
    protected:
    void sound()
    {
        cout<<"Animal sound."<<endl;
    }
};

class dog:public animal
{
    public:
    void sound()
    {
        animal::sound();   //this is defined as protected so it is inherited and can be accessed within the class. Hence, inherited is proved.
        cout<<"Dog bark."<<endl;
    }
};
int main()
{
    dog d;
    //this is member function overloading. It means if same name is used in both base and derived class then priority is given to derivesd class.
    d.sound();  //this call the member function sound of the derived class dog where it calls sound of the base class.
    // d.animal::sound();     //this is defined as protected and hence cannot be accessed from outside the class.
    return 0;
}