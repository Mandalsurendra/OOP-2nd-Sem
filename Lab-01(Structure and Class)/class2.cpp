// Create class named student and make all the data members private
// and use member functions like accessor methods to set the values and display them.
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int rollNo;
    int age;
    float percentage;

public:
    void setData()
    {
        cout << "Enter Student's Name:" << endl;
        cin >> name;
        cout << "Enter roll no.:" << endl;
        cin >> rollNo;
        cout << "Enter age:" << endl;
        cin >> age;
        cout << "Enter percentage:" << endl;
        cin >> percentage;
    }

    void showData()
    {
        cout << "-------------------------------------" << endl;
        cout << "Student's name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Age: " << age << endl;
        cout << "Percentage: " << percentage << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main()
{
    student s;
    s.setData();
    s.showData();
    return 0;
}
